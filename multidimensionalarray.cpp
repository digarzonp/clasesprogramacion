#include <iostream>

const int W = 5;
const int H = 3;

int M [H][W];

int main(void)
{
  for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      M[ii][jj] = (ii+1)*(jj+1);
    }    
  
 }

// print MATRIZ
  std::cout << "Matriz original :\n";
  for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      std::cout << M[ii][jj] << " ";
    }     std::cout << std::endl;
  }
}
