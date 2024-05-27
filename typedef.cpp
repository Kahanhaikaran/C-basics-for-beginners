#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;
int main(){

  //pairlist_t pairlist;
  text_t firstName = "Karan";
  number_t age = 22;
  
  std::cout << firstName << '\n';
  std::cout << age;

  //typedef = reserved keyword used to create an additional name (alias) for another data type. New identifier for an existing type. Helps with readability and reduces typos. Use when there is a clear benefit. It can be replaced by 'using' (work better w/ templates)
  
  
return 0;
}
