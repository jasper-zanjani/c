// Beginning C++ 17 p.29

#include <iostream>

int main()
{
  int apples {15};
  int oranges {5};
  int fruit {apples + oranges};

  std::cout << apples << " + " << oranges << " = " << fruit << std::endl;
  return 0;
}