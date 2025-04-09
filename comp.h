#ifndef COMP_H
#define COMP_H

#include <limits>

namespace compute {
  typedef unsigned long Num;

  // 18,446,744,073,709,551,615 > 18e19
  const Num limit = std::numeric_limits<Num>::max();
  Num fact(int n);
  Num fib(int n);
}
#endif
