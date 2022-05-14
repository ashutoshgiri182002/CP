/*

Given an integers N and an integer p, you need find the square
root of number N upto p places.Do it without using library function.

input:
n = 10,p = 3

output:
3.162
*/


#include<iostream>
using namespace std;

float square_root(int N,int p){
  int s = 0;
  int e = N;
  float ans = 0;

  //Binary Search
while(s<=e){
  int mid = (s+e)/2;
  if(mid*mid==N){
    return mid;
  }
  else if(mid*mid < N){
    ans = mid;
    s = mid + 1;
  }
 else{
   e = mid - 1;
 }

}
// cout<<"integer :"<<ans<<endl;

  //Linear Search (for floating part)
 float inc = 0.1;
  for(int place =1;place <=p;place++){
    //do linear Search
    while(ans*ans <=N){
      ans +=inc;
    }
    //take one step back
    ans = ans - inc;
    inc = inc/10.0;
    
  }
  return ans;
}


int main(){

int n,p;
cin>>n>>p;

cout<<square_root(n,p)<<endl;

return 0;

}
