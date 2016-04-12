#include <iostream>
#include "Atkin.h"
#include <math.h>

using namespace std;

int main(){
  unsigned long long int answer = 1;

  short limitNum = 20;
  short twoPow = floor(log(limitNum)/log(2));
  answer *= pow(2,twoPow);
  for(int i=3;i<=20;i+=2){
    if(isPrime(i)){
      answer *= pow(i,floor(log(limitNum)/log(i)));
    }
  }

  cout << answer << endl;
  return 0;
}
