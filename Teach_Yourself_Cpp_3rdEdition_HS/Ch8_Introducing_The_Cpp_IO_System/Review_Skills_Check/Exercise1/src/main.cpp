
/*
	Exercise 1.: Create a class hierarchy that stores information about airships. Stat with a general base class called 'airship'
   that stores the number of passangers and the amount of cargo (in pounds) that can be carried. Then create two derived classes
   called 'airplane' and 'balloon' from 'airship'. Have 'airplane' store the type of engine used (propeller or jet) and range, in
   miles. Have 'balloon' store information about the type of gas used to lift the balloon (hydrogen or helium) and its maximum
   altitude (in feet). Create a short program that demonstrates this class hierarchy. (Your solution will, no doubt, differ from
   the answer shown in the back of this book. If it is functionally similar, count it as correct.)
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define N_A (0) // a value indicating or representing - Not Available/Not Applicable/Unknown state

// === class 'airship' === // // used as a <base>
class airship{
private:
   int passengers; // number of passengers that can be carried [-]
   double cargo; // the amount of cargo that can be carried [lbs] (pounds)
public:
   // Constructors:
   airship(){ passengers = 0; cargo = 0.0; }
   airship(int p, double c){ passengers = p; cargo = c; }
   // Misc. utility functions:
   void geta(int& p, double& c){ p = passengers; c = cargo; }
   void seta(int p, double c){ passengers = p; cargo = c; }
   void showa(){
      cout << "Passengers capacity: " << passengers << " [-]" << '\n';
      cout << "Cargo hold capcity: " << cargo << " [lbs]" << '\n';
   }
};

typedef enum {PROP=1, JET=2} engine_t;

// === class 'airplane' === // // used as a <derived> class from 'airship'
class airplane : private airship{
private:
   engine_t engine; // The type of engine(s) that the plane is using
   int range; // The range that the plane could cover
public:
   // Constructors:
   airplane() : airship(){ engine = (engine_t)N_A; range = 0;}
   airplane(engine_t eng, int r, int p, double c) : airship(p, c){
      engine = eng;
      range = r;
   }
   // Misc. utility functions:
   void setp(engine_t eng, int r, int p, double c){
      seta(p, c);
      engine = eng;
      range = r;
   }
   void getp(engine_t& eng, int& r, int& p, double& c){
      geta(p, c);
      eng = engine;
      r = range;
   }
   void showp(){
      showa();
      cout << "Engine type: ";
      switch(engine){
         default:  cout << "Information Not Available!" << '\n'; break;
         case(PROP): cout << "Propeller" << '\n'; break;
         case(JET):  cout << "Jet" << '\n'; break;
      }
      cout << "Range: " << range << " [miles]" <<'\n';
   }
};

typedef enum {HYDROGEN=1, HELIUM=2} gas_t;


// === class 'balloon' === // // used as a <derived> class from 'airship'
class balloon : private airship{
private:
   gas_t gas; // Type of gas used to lift the balloon
   int altitude; // The maximum altitude that the balloon could reach in [ft] (feet).
public:
   // Constructors:
   balloon(): airship(){ gas = (gas_t) N_A; altitude = 0;}
   balloon(gas_t g, int a, int p, double c) : airship(p, c){
      gas = g;
      altitude = a;
   }
   // Misc. utility functions:
   void setb(gas_t g, int a, int p, double c){
      seta(p, c);
      gas = g;
      altitude = a;
   }
   void getb(gas_t& g, int& a, int& p, double& c){
      geta(p, c);
      g = gas;
      a = altitude;
   }
   void showb(){
      showa();
      cout << "Gas type: ";
      switch(gas){
         default: cout << "Information Not Available!" << '\n'; break;
         case(HYDROGEN): cout << "Hydrogen" << '\n'; break;
         case(HELIUM): cout << "Helium" << '\n'; break;
      }
      cout << "Maximum altitude: " << altitude << " [ft]" << '\n';
   }
};

int main(){

   airplane a1(JET, 3000, 250, 6000);
   balloon b1(HELIUM, 10000, 4, 600);

   cout << " === Boing 737 === " << '\n';
   a1.showp();
   cout << " === Vifgin 1 === " << '\n';
   b1.showb();

   return EXIT_SUCCESS;
}
