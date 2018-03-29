#include <iostream>
#include<string>
using namespace std;

int main ()
{
  string str {"hello!"};
  for (char c:str)// por cada caracter en la cadena string haga{}
    {
      std::cout<<"["<<c<<"]";
    }
  std::cout<<"\n";//un enter despues de todo lo hecho
}
