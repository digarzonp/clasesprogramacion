
#include <iostream>

const int W = 4;
const int H = 3;


int main(void)
{
  double array2d[H][W] = {{0.0}};
  for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      array2d[ii][jj] = ii*H+jj;
    }    
  }

  double vector2d[W] = {0};
  for (int ii = 0; ii < W; ++ii) {
   vector2d[ii] = 2*ii;
    }    
  
   double mult[H][W] = {{0.0}};
   for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      mult[ii][jj] =array2d[ii][jj]* vector2d[jj];
     }
   }
   
 double sum[H] = {0};
   for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      sum[ii] +=array2d[ii][jj]* vector2d[jj];
     }
   }
  std::cout << "Matriz original :\n";
  for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj < W; ++jj) {
      std::cout << array2d[ii][jj] << " ";
    }     std::cout << std::endl;
  }
  std::cout<< "vector:\n";
 for (int ii = 0; ii < W; ++ii) {
     std::cout << vector2d[ii] << " ";
    }     std::cout << std::endl;

  std::cout<< "matriz fila por columna:\n";
 for (int ii = 0; ii < H; ++ii) {
    for (int jj = 0; jj <W ; ++jj) {
      std::cout << mult[ii][jj] << " ";
    }     std::cout << std::endl;
  }

 std::cout<< "multiplicacion matriz por vector:\n";
 for (int ii = 0; ii < H; ++ii) {
   
      std::cout << sum[ii] << " ";
    }     std::cout << std::endl;
  
}

