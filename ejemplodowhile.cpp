#include<iostream>
using namespace std;

int main()

{
  unsigned long n;
  do {// haga todo lo que esta en {} es decir pida un entero he imprimalo
    cout <<" enter number (0 to end):";
    cin >>n;
    cout <<"you entered:"<<n<<"\n";
  } while(n!=0);// mientras ese entero sea diferente de cero 
    return 0;
}
