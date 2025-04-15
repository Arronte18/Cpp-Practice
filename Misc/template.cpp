//cctype lest you use toupper, and C native character and string methods
#include <cctype>
#include <iostream>

//cmath lets you do sqrt, pow(), sin, cos, cube root (cbrt()), floor, and round
# include <cmath>
#include <string>

// lets you use setprecision and fixed to set decimal points
#include <iomanip>

int main() {
  std::string name = "anthony";
  char c1 = 'A', c2 = 'b', c3 = '9';
  char cap = name.at(0);
  std::cout << (char)toupper(cap);

  return 0;
}