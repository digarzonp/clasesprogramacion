#include <iostream>

const int W = 4;
const int H = 3;

int main(void)
{
  double array2d[H*W] = {0.0};
  for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      array2d[ii*W + jj] = 1.0/(ii+jj+1);
    }    
  }
// print the matrices
std::cout << "Original matrix:\n";
 for (int ii = 0; ii < H; ++ii) {
   for (int jj = 0; jj < W; ++jj) {
     std::cout << array2d[ii*W + jj]<<  "  "; 
   }
   std::cout << "\n";
 }
}
