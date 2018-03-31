#include <iostream>
#include<cmath>

using fptr =double(double);

double f(double x);
double g(double x);
double bisection(double xl, double xu, double eps, int nmax, fptr func);
double regulafalsi(double xl, double xu, double eps, int nmax, fptr func);
double simplefixed(double xl, double eps, int nmax, fptr func, fptr g);

int main(void)
{
  const double eps = 1.0e-8;
  int NMAX = 50;
  double xl = 12, xu = 18, xr=0;
  xr = bisection(xl, xu, eps, NMAX, f);
  xr = regulafalsi(xl, xu, eps, NMAX, f);
  xr = simplefixed(xl,eps, NMAX,f,g);
  return 0;
}

double f(double x)
{
  return x* cosh(50/x)-x-10;
}

double g(double x)
{
  return x* cosh(50/x)-10;
}

double regulafalsi(double xl, double xu, double eps, int nmax, fptr func)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xr = 0;
  
  for(int ii = 0; ii <= nmax; ++ii) {
    xr = xu - (f(xu)*(xl-xu))/(f(xl) - f(xu));
    std::cout << ii << "  " << xl << " " << xu << " " << xr << " " << f(xr) << std::endl;
    if (std::fabs(f(xr)) < eps) break;
    if (f(xr)*f(xl) < 0)
      xu = xr;
    else
      xl = xr;
  }
  std::cout << xr << std::endl;
  
  return xr;
}
double bisection(double xl, double xu, double eps, int nmax, fptr func)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xr = 0;
  
  for(int ii = 0; ii <= nmax; ++ii) {
    xr = 0.5*(xu + xl);
    std::cout << ii << "  " << xl << " " << xu << " " << xr << " " << f(xr) << std::endl;
    if (std::fabs(f(xr)) < eps) break;
    if (f(xr)*f(xl) < 0)
      xu = xr;
    else
      xl = xr;
  }
  std::cout << xr << std::endl;
  
  return xr;
}

double simplefixed(double xl, double eps, int nmax, fptr func, fptr g)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xr = 0;
  
  for(int ii = 0; ii <= nmax; ++ii) {
    xr=xl;
    std::cout << ii << "  " << xl << " " << xr << " " << f(xr) <<" "<< g(xr)<< std::endl;
  if (std::fabs(g(xr)-xr) < eps) break;
  else
    xr=g(xr);
      }
  std::cout << xr << std::endl;
   return xr;
}
