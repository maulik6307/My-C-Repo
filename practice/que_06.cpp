#include <iostream>
#include <cmath>
#include <limits>
#include <climits>
using namespace std;

int main(){

int arr[] = {1,2,3,4,5};

int ans = INT_MIN;

for(int i=0;i<5;i++){

  if(arr[i]>ans){

      ans = arr[i];

  }
}
cout<<ans;
return 0;
}