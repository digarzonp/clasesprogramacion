#include<iostream>
using namespace std;

int sumfor(int N)
{
  int n=1, sum=0;// primero inicio cada valor de cada variable , la suma la tengo que empezar en cero 
  for(n=1;n<=N;n++) // luego escribo todos los valores que voy a utilizar , es decir , empiezo en 1;hasta que sea menor que N , y voy sumando 1 a n
    if(n%2>0){ // con el if agrego otra condicion , en este caso que sea par y despues del { voy a decir que va a suceder , en este caso sumo a n 
      sum +=n;
    }
  return sum;// eso va a pasar con el primer n , luego tengo que volver a la sum para que vuelva a hacer el proceso con el segundo numero , hasta llegar a N 
}
int main(void)
{
  cout<< sumfor(50)<<",";
}    
