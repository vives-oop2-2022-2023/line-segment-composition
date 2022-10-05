#pragma once

#include <string>

namespace Geometry {

  class Point {

    // Constructors
    public:
      Point(void);                  // Default
      Point(double x, double y);    // Initialization constructor

    // Getters
    public:
      double x(void);
      double y(void);

    // Setters
    public:
      void x(double x);
      void y(double y);

    // to_string
    public:
      std::string to_string(void);  

    // Attributes
    private:
      double _x = 0;
      double _y = 0;

  };

};