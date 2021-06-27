

//1.missing number:You are given all numbers between 1,2,…,n except one. Task is to find missing number.
#include <iostream>
using namespace std;
int main() {
  int arr[]={1,2,3,4,5};
  int arr_modified[]={1,2,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int i=0;
   int j;
 // cout<<n;
  while(i<n){
   
     for(j=0;j<n-1;j++){
       if(arr[i]==arr_modified[j]){
         i++;
        break;
       }
     }if(j==n-1){
       cout<<arr[i]<<endl;
       break;
     }
   
  }
}
