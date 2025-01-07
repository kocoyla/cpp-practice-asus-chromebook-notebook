#include <iostream>
#include "comp.h"

using namespace std;

int main(int argc, char** argv) {
  int n{0};
  if (argc != 2) {
    cerr << "Need a number to find the factorial\n" <<
      "E.g., run as: \n" << argv[0] << " 15\n";
    return 1;
  }
  n = stoi(argv[1]);
  try {
    cout << "Factorial of " << n << " is " << compute::fact(n) << endl;
  } catch (int errorCode) {
    cerr << "The largest we could compute is for n=" << errorCode << endl;
  }
  return 0;
}

