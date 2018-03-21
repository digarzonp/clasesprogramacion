#include<iostream>
#include<cmath>

using fptr =double(double);

 double trapezoid_regular(const double a,const double b,const int n, fptr func);

int main(void)

{
  const int N=20;

  std::cout<<"regular integral (n=20) is"<<trapezoid_regular(0,M_PI,N,std::sin)<<std::endl;
  std::cout<<"regular integral (n=40) is"<<trapezoid_regular(0,M_PI,2*N,std::sin)<<std::endl;
  return 0;
}

double trapezoid_regular(const double a, const double b, const int n,fptr func)

{
  const double h=(b-a)/n;
  double sum=0.5*(func(a)+func(b));
  for(int ii=1;ii<n-1;++ii){
    double x=a + ii*h;
    sum += func(x);
		    
}
		  return h*sum;
 }
