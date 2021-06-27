//2.You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
#include<iostream>
using namespace std;
#include<algorithm>

int main(){
  string s;
  cin>>s;    //only A,G,C,T allowed
 int n=s.size();
 int i=0;
 int count=1;
 int result;
 for(i=0;i<n;i++){
   while(s[i]==s[i+1]){
     count++;
   }
   result=max(result,count);
   count=1;
 }
 cout<<result;
}
