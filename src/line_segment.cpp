#include "line_segment.h"
#include <sstream>

namespace Geometry {

  LineSegment::LineSegment(void) {}

  LineSegment::LineSegment(Point start, Point end) {
    this->start(start);
    this->end(end);
  }

  LineSegment::LineSegment(double x1, double y1, double x2, double y2)
    : LineSegment(Point(x1, y1), Point(x2, y2)) {
  }

  void LineSegment::start(Point start) {
    _start = start;
  }

  void LineSegment::end(Point end) {
    _end = end;
  }

  Point LineSegment::start(void) {
    return _start;
  }

  Point LineSegment::end(void) {
    return _end;
  }

  std::string LineSegment::to_string(void) {
    // std::stringstream ss;
    // ss  << start().to_string()
    //     << " => "
    //     << end().to_string();
    // return ss.str();

    return start().to_string() + " => " + end().to_string();
  }

};