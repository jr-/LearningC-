#include <string>
#include <vector>
#include <iostream>
#include "Object.hpp"
using namespace std;
int main(int argc, char *argv[]) {
  Point pnt(3.0, 2.0, "alo");
  cout << pnt.getName() << endl;
  cout << pnt.getX() << endl;
  cout << pnt.getY() << endl;

  return 0;
}
