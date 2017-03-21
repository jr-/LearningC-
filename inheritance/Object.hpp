#include <string>
using namespace std;

class Object {
  private:
       string _name;
  public:
    Object(string name) : _name(name) {}
    virtual ~Object() {}
    string getName() const { return _name;}
};

class Point: public Object {
  private:
    double _x;
    double _y;
  public:
    Point(double x, double y, string name) : Object(name), _x(x), _y(y) {}
    double getX() const { return _x;}
    double getY() const { return _y;}

};
