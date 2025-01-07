#include "comp.h"
#include <iostream>

namespace compute {
  Num fib(int n) {
    return 1; // coming soon!
  }

  Num fact(int n) {
    if (n < 2) return 1;
    if (limit < double(n) * fact(n-1)) {
      std::cerr << "Sadly that exceeds our limit: " << limit << std::endl;
      throw n;
    } 
    return n * fact(n-1);
  }
}
