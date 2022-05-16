/*

Given a set of non-negative integers , and a value sum,determine if there is a  subset of the given set with
sum equal to given sum.

input:
arr= [10,12,15,6,19,20]
sum = 16

output:

Yes, how many such subset are there

*/

//without using dynaminc programing

#include<iostream>
#include<vector>
using namespace std;

int countSubset(vector<int>arr,int n, int i, int x){
  //base case
  if(i==n){
    if(x==0){
      return 1;
    }
     return 0;
  }

 //recursive case
  int inc  = countSubset(arr,n,i+1,x-arr[i]);
  int exc =  countSubset(arr,n,i+1,x);
  return inc + exc;

}

int main(){

vector<int>arr{1,2,3,4,5};
int x = 10;

cout<<countSubset(arr,arr.size(),0,x)<<endl;

return 0;
}
