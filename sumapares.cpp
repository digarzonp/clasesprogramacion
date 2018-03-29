#include<iostream>
using namespace std;

int add(int x);
int sum(int N);
int main(void)
  
{
  int n, sum;
  n=100, sum=0;
   
  while (n>=1){
   cout <<add(n)<<",";
    --n;
    
  }
  
}



int add(int x)
	{
	  if ((x%2)==0)
	    return (x);
	   else 
	   return 0;
	}
	
