// Beginning C++ p. 225


#include <iostream>
#include <string>

int main()
{
  std::string first;
  std::string second;

  std::cout << "Enter your first name: ";
  std::cin >> first;

  std::cout << "Enter your surname: ";
  std::cin >> second;

  std::string fullname {first + " " + second};
  std::cout << "Greetings, " << fullname << "!"<< std::endl;
  return 0;
}
