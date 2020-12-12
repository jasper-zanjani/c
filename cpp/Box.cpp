#include <iostream>

class Box
{
private:
  double length{1.0};
  double width{1.0};
  double height{1.0};

public:
  Box(double l, double w, double h)
  {
    length = l;
    width = w;
    height = h;
  }
  double volume()
  {
    return length * width * height;
  }
};

int main() {
  Box box {2, 3, 4};
  std::cout << "Volume of custom box: " << box.volume() << std::endl;
  // std::cout << "Volume of default box: " << defaultbox.volume() << endl;
}