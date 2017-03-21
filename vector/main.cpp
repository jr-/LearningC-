#include <string>
#include <vector>
#include <iostream>
#include "Dot.hpp"
using namespace std;
int main(int argc, char *argv[]) {
  vector<Dot> dots = vector<Dot>();
  string name = "dot";
  Dot d = Dot(name, 30.0, 30.0);
  Dot t = Dot("alo", 20.0, 20.0);
  dots.push_back(d);
  dots.push_back(t);

  for(auto &d : dots) {
      cout << d.getName() << endl;
  }
  return 0;
}
