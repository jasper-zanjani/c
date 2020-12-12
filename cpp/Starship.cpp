#include <string>

class Starship
{
private:
  int crew {};
  std::string name {};
  std::string registry {};
public:
  std::string getName() { return name;}
  std::string getRegistry() { return registry;}
  int getCrew() { return crew;}
};