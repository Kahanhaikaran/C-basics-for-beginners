#include <iostream>
//using namespace std; //to save some time 
namespace first{
int x = 1;
}
namespace second{
int x =2;
}

int main() {
  //Namespace = provides a solution for preventing name conflicts in large projects. Each entitiy needs a unique name. A namespace allows for identically named entities as long a the namespaces are different.
  int x = 0;
  std::cout << x << '\n';
  std::cout << first::x << '\n';
  std::cout << second::x;

return 0;
}
