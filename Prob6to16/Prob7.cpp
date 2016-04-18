#include <iostream>
#include "../Atkin.h"

using namespace std;

int main(){
  int count = 1;
  long long i = 0,lastPrime = 0;
  for(i=3;count<10001;i=i+2){
    if(isPrime(i)){
      count++;lastPrime = i;
    }
  }
  cout << lastPrime << endl;
  return 0;
}
