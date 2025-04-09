#include "comp.h"
#include <iostream>

namespace compute {
  const int N = 100;
  Num fib_dizisi[N+1];
  bool init = true;
  
  Num fib(int n) {
    if (n > N) throw N;
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (init) {
      for (int i=0; i<=N; ++i) fib_dizisi[i] = 0;
      init = false;
    }
    if (fib_dizisi[n]) return fib_dizisi[n];
    Num f1 = fib(n-1), f2 = fib(n-2);
    if (limit < double(f1)  + f2) {
      std::cerr << "Sadly that exceeds our limit: " << limit << std::endl;
      throw n-1;
    }
    return fib_dizisi[n] = f1 + f2;
  }

  Num fact(int n) {
    if (n < 2) return 1;
    if (limit < double(n) * fact(n-1)) {
      std::cerr << "Sadly that exceeds our limit: " << limit << std::endl;
      throw n-1;
    } 
    return n * fact(n-1);
  }
}
