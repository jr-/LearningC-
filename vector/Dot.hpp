#include<string>
using namespace std;
class Dot
{
  private:
    string _name;
    double _x;
    double _y;
  public:
    Dot(string name, double x, double y) {
        _name = name;
        _x = x;
        _y = y;
    }

    string getName() {
        return _name;
    }
};
