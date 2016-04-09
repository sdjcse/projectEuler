#include <iostream>
#include "Palindrome.h"
#include <time.h>

using namespace std;

int main(){
  clock_t tStart = clock();
  long maxPalin = 0;
  for(int i=999;i>99;i--){
    for(int j=999;j>99;j--){
      maxPalin = (palCheck(i*j))?((i*j)>maxPalin?(i*j):maxPalin):maxPalin;
    }
  }

  cout << "Time taken first method: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;

  tStart = clock();
  // Efficient way
  int i=999;
  int j=0;
  int decrenter = 0;
  while(i>=100){
    if(i%11 == 0){
      j=999;
      decrenter = 1;
    }else{
      j = 990;
      decrenter = 11;
    }

    while(j>=i){
      if(i*j <= maxPalin){
        break;
      }
      if(palCheck(i*j)){
        maxPalin = i*j;
      }
      j -= decrenter;
    }
    i -= 1;
  }
  cout << maxPalin << endl;

  cout << "Time taken second method: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
  return 0;
}
