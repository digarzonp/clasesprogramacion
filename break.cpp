#include<iostream>
using namespace std;

int main()
{
  int n;
  for(n=10;n>0;n--)
    {cout <<n<<",";
      if(n==3)// si n es igual a 3 imprimo abordar y no hago nada mas
	{
	  cout<<"countdown aborted;";
	  break;
	}
	}
  return 0;     
}
