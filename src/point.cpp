#include "point.h"
#include <sstream>

namespace Geometry {

  Point::Point(void)
    : Point(0, 0) {       // constructor initialization list
  }

  Point::Point(double x, double y) {
    this->x(x);
    this->y(y);
  }

  double Point::x(void) {
    return _x;
  }

  double Point::y(void) {
    return _y;
  }

  void Point::x(double x) {
    _x = x;
  }

  void Point::y(double y) {
    _y = y;
  }

  std::string Point::to_string(void) {
    std::stringstream ss;
    ss << "[ " << x() << ", " << y() << " ]";
    return ss.str();
  }

};