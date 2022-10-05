#pragma once
#include "point.h"

namespace Geometry {

  class LineSegment {
    // Constructors
    public:
      LineSegment(void);
      LineSegment(Point start, Point end);
      LineSegment(double x1, double y1, double x2, double y2);

    // Setters
    public:
      void start(Point start);
      void end(Point end);

    // Getters
    public:
      Point start(void);
      Point end(void);

    // to_string
    public:
      std::string to_string(void);

    private:
      Point _start;   // Calls default constructor of Point
      Point _end;

  };

};