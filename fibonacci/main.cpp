#include <iostream>
#include <vector>

using namespace std;

long recursive(int iterations) {
  if(iterations <= 1) {
    return 1;
  }

  return recursive(iterations-2) + recursive(iterations-1);
}

long tailRecursion(int iterations, long val = 1, long prev = 0) {
  if (iterations < 0) {
    return prev;
  }

  return tailRecursion(iterations - 1, val + prev, val);
}

long dynamicPrograming(int iterations) {
  long values[iterations+1];
  values[0] = values[1] = 1;

  for(int i = 2; i <= iterations; i++) {
    values[i] = values[i-1] + values[i-2];
  }

  return values[iterations];
}

int main(int argc, char *argv[]) {

  if(argc < 2) {
    cout << "Usage: " << argv[0] << " [iterations]" << endl;
    return 1;
  }

  int iterations = stoi(argv[1]);

  cout << "Dynamic Programing: " << dynamicPrograming(iterations) << endl;
  cout << "Tail Recusion: " << tailRecursion(iterations) << endl;
  cout << "Recursion: " << recursive(iterations) << endl;

  return 0;
}
