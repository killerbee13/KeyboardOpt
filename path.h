#ifndef PATH_H_INCLUDED
#define PATH_H_INCLUDED

namespace path {

//A path is a linear series of connected nodes

typedef float float_t;
class Point;
class Vector;

struct pathContext {
  float_t distanceScale, directionScale, overrunConstant;
}

class Path {
public:
private:
  friend float_t comparePaths(Path a, Path b);
  std::vector<std::pair<Point,Vector>> _Path;
  pathContext _context;
};

class Point {
public:
  
private:
  std::pair<float_t,float_t> _Point;
};

class Vector {
public:
  
private:
  std::pair<float_t,float_t> _Vector;
};

}

#endif //PATH_H_INCLUDED