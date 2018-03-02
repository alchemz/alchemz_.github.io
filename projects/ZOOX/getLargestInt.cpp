#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int getDifferentNumber( const vector<int>& arr ) 
{
  int n=arr.size();
  int temp =0;
  
  for(int i=0; i<n-1; i++){
    //copy the array
    temp = arr[i];
    while(temp< n && arr[temp] !=temp){
      swap(temp, arr[temp]);
    }
    
    for(int i=0; i<n-1; i++){
      if(arr[i] != i)
        return i;
    }
    return n;
  }
}

int main() {
  return 0;
}