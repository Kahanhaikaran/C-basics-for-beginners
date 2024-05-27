#include <iostream>
using namespace std;
int main(){
  const double pi = 3.14159; //const is a keyword which will modify a keyword value so it is read only and its value can't be changed 
  double radius = 10;
  double circumference = 2* pi * radius;

  cout << circumference << "cm" ;

return 0;
}
