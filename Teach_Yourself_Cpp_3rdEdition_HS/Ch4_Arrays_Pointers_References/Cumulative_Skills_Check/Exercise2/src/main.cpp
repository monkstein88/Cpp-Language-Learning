
/*
	Exercise 2.: In Chapter 2, a 'strtype' clas was created that dynamically allocated space for a string.
  Rework the 'strtype' class (shown here for your convenience) so it uses 'new' and 'delete'.

  #include <iostream>
  #include <cstring>
  #include <cstdlib>
  using namespace std;

  class strtype{
    char* p;
    int len;
  public:
    strtype(char* ptr);
    ~strtype();
    void show();
   };

  strtype::strtype(char* ptr){
    len = strlen(ptr);
    p = (char*) malloc(len+1);
    if(!p){
      cout << "Allocation error!\n";
      exit(EXIT_FAILURE);
    }
    strcpy(p, ptr);
  }

  strtype::~strtype(){
    cout << "Freeing p\n";
    free(p);
  }

  void strtype::show(){
    cout << p << " - length: " << len;
    cout << "\n";
  }

  int main(){
    strtype s1((char*)"This is a test."), s2((char*)"I like C++.");

    s1.show();
    s2.show();
  }

*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for 'EXIT_SUCCESS' and 'EXIT_FAILURE' macros and the 'exit()' function
using namespace std;

class strtype{
  char* p;
  int len;
public:
  strtype(char* ptr);
  ~strtype();
  void show();
};

strtype::strtype(char* ptr){
  len = strlen(ptr) + 1;
  p = new char [len];
  if(!p){
    cout << "Allocation error!\n";
    exit(EXIT_FAILURE);
  }
  strcpy(p, ptr);
}

strtype::~strtype(){
  delete [] p;
}

void strtype::show(){
  cout << p << " - length: " << len;
  cout << "\n";
}

int main(){
  strtype s1((char*)"This is a test."), s2((char*)"I like C++.");

  s1.show();
  s2.show();

  return EXIT_FAILURE;
}
