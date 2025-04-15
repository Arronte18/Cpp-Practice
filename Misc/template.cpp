#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string name = "anthony";
  char c1 = 'A', c2 = 'b', c3 = '9';
  char cap = name.at(0);
  cout << (char)toupper(cap);

  return 0;
}