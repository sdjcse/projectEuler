#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

long findProduct(int *arr,int start,int end){
  long prod = 1;
  for(int i=start;i<=end;i++){
    prod *= (long)arr[i];
  }
  // if(start==0){
  //   cout << prod << endl << end << " " << start << endl;
  // }
  return prod;
}

int containsZeroInRange(int *arr, int start, int end){
  if(start>end){
    return -1;
  }
  // if(start==0){
  //   cout << end << " "<< arr[end] << endl;
  // }
  for(int i=start;i<=end;i++){
    if(arr[i]==0){
      return i;
    }
  }
  return -1;
}


int main(){
  string line;
  int charArray[1000];
  int counter = 0,i=0;
  long maxProd=0;
  int zeroCheck = 0;
    ifstream myfile ("BigNum.in");
    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
        // cout << line << '\n';
        i=0;
        for(i=0;i<line.size();i++){
          charArray[counter] = line[i]-'0';
          counter++;
        }
      }

      myfile.close();
    }
    else cout << "Unable to open file";

    for(i=0;i<(1000-12);i++){
      zeroCheck = containsZeroInRange(charArray,i,i+12);
      if(zeroCheck == -1){
        maxProd = maxProd>findProduct(charArray,i,i+12)?maxProd:findProduct(charArray,i,i+12);
      }else{
        i = zeroCheck;
      }
    }

    cout << endl << maxProd << endl;
    return 0;
}
