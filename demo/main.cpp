// Copyright by Spertis

#include <iostream>

#include "ptr.hpp"


int main() {

  int *p = new int{5};

  SharedPtr sh1(p);
  std::cout << sh1.use_count() << std::endl;
  SharedPtr<int> sh2(sh1);
  std::cout << sh2.use_count() << std::endl;

  return 0;
}
