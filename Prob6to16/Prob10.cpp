#include <iostream>
#include "../Atkin.h"

using namespace std;

int main(){
  int count = 1;
  long long i = 0,lastPrime = 2;
  for(i=3;i<2000000;i=i+2){
    if(isPrime(i)){
      count++;lastPrime += i;
    }
  }
  cout << lastPrime << endl;
  return 0;
}
