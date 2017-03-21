#include <string>
#include <vector>
#include <iostream>
#include "Object.hpp"
using namespace std;
int main(int argc, char *argv[]) {
  vector<Object> objs = vector<Object>();
  Point pnt("alo");
  pnt.addCoordinate(3.0, 3.0);
  objs.push_back(pnt);

  Polygon plg("hai");
  plg.addCoordinate(3.0, 3.0);
  plg.addCoordinate(3.0, 3.0);
  plg.addCoordinate(4.0, 4.0);
  cout << plg.getTypeName() << endl;

  objs.push_back(plg);

  vector<Coordinate> pc = plg.getCoords();

  for(auto &i : objs) {
    cout << i.getName() << endl;
    cout << i.getTypeName() << endl;
  }

  for(auto &d : pc) {
      cout << d.getX() << endl;
      cout << d.getY() << endl;
  }


  return 0;
}
