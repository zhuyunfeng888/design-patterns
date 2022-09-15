class Point
{
public:
  int x;
  int y;
};

class Line
{
public:
  Point start;
  Point end;

  Line(const Point &start, const Point &end)
      : start(start), end(end)
  {
  }
};

class Rect
{
public:
  Point leftUp;
  int width;
  int height;

  Rect(const Point &leftUp, int width, int height)
      : leftUp(leftUp), width(width), height(height)
  {
  }
};

// 改变
class Circle
{
};