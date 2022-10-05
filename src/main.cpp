#include <iostream>
#include "point.h"
#include "line_segment.h"

using namespace std;
using namespace Geometry;

int main() {
  cout << "Welcome to the composition demo" << endl;

  // Creating two points on the STACK
  Point origin;
  Point second(12, 3);

  cout << "Origin: " << origin.to_string() << endl;
  cout << "Second: " << second.to_string() << endl;  

  LineSegment nothing;
  LineSegment segment(origin, second);
  LineSegment center(
    Point(12, 3),
    Point(44, 66)
  );
  LineSegment faraway (1, 2, 3, 4);

  cout << "Center: " << center.to_string() << endl;

  return 0;
}