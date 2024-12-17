#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int result;

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << result<< endl;
  
  string mystring;
  mystring = "This is the initial string content";
  cout << mystring << endl;
  mystring = "This is a different string content"; //cambia el valor del string
  cout << mystring << endl; //endl termina la linea

  // terminate the program:
  return 0;
}
