#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

namespace mathematics
{
double calculation(double a, double b, char oberation)
{
  switch (oberation)
  {
  case '+':
  {
    return a + b;
  }
  break;
  case '-':
  {
    return a - b;
  }
  break;
  case '*':
  {
    return a * b;
  }
  break;
  case '/':
  {
    return a / b;
  }
  break;
  default:
  {
    return 0;
  }
  }
}
double heron(double a, double b, double c)
{
  double s = (a + b + c) / 2;
  double area = s * (s - a) * (s - b) * (s - c);
  return std::sqrt(area);
}
double square(double a)
{
  return a * a;
}
struct Triangle
{
  double a;
  double b;
  double c;
};
double heron( Triangle t )
{
return heron(t.a , t.b , t.c);
}
}
#endif // MATHEMATICS_HPP
