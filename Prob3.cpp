#include <iostream>
#include <math.h>
#include "Atkin.h"

using namespace std;

int main(){
  long long val= 600851475143;
  long long sqrtVal = sqrt(val);
  long long maxPrime = 2;
  for(long long i=3;i<sqrtVal;i=i+2){
    maxPrime = (isPrime(i))?((val%i==0)?((i>maxPrime)?i:maxPrime):maxPrime):maxPrime;
  }
  cout << maxPrime << endl;
  return 0;
}
