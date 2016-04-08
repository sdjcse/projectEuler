#include <iostream>

using namespace std;

int main(){
int first = 1;
int second = 2;
int sum = 0,finalSum=2;
int limit = 4000000;
for(sum=0;second<limit;){
  sum = first+second;
  finalSum += (sum%2==0)?sum:0;
  first=second;
  second=sum;
}
cout << finalSum << "\n";
  return 0;
}
