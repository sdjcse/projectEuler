#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int lim = 100;
  long long sumSquare = (lim * (lim+1) * (2*lim+1))/6;
  long long squareOfSum = pow((lim*(lim+1))/2,2);
  cout << squareOfSum-sumSquare << endl;
  return 0;
}
