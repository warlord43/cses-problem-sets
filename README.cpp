#include<iostream>
using namespace std;
#include<math.h>

int main(){
  
  int n;
  cin>>n;
  int arr[n];
if(n>4){
 int i=0;
 if(n%2!=0){
 for(i=0;i<n;i++){
   if (i>n/2){
     arr[2*(i-n/2)-1]=i+1;
   }else{
     arr[2*i]=i+1;
   }
 }
 }else{
   for(i=0;i<n;i++){
   if (i>=n/2){
     arr[2*(i-n/2)+1]=i+1;
   }else{
     arr[2*i]=i+1;
   }
 }
 }
 
for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
 }
}
else{
 cout<<"no solution";
}
}
