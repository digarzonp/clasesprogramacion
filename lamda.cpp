#include<iostream>

int main (void)
{
  auto flamda= [](auto a, auto b){return a<b;};
  bool flag= flamda(3,3.14);
  std::cout<<flag<<std::endl;
}
