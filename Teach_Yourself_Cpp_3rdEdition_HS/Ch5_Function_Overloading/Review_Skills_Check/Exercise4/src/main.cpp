
/*
  Exercise 4.: Given the following class, show how to initialize a ten-element array so that 'x' has the value 1
  through 10.

  class samp{
    int x;
  public:
    samp(int n){ x = n; }
    int getx(){ return x; }
  };

*/

class samp{
  int x;
public:
  samp(int n){ x = n; }
  int getx(){ return x; }
};

samp samp_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
