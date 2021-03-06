#include<iostream>
#include<array>
#include<cmath>

int main(void)
{
  const int N=7;
  double X[N], F[N];

  for(int ii= 0;ii< N; ++ii){
    X[ii]=5*ii;
}

  F[0]=0.0;F[1]=9.0; F[2]=13.0; F[3]=14.0; F[4]=10.5; F[5]=13.0; F[6]=5.0;
  double angle [N] {0.50, 1.40 ,0.75 ,0.90 ,1.30 ,1.48 ,1.50};

  double work = 0;
  for(int ii=0;ii<N-1;++ii){
    work +=F[ii+1]*std::cos(angle[ii+1])*(X[ii+1]-X[ii]);
}
std::cout<<work<<std::endl;

return 0;
}
	
