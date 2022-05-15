/*

Given a ladder containing N steps, you cantake a jump of 1,2 or 3 at each step.
find the number of ways to climb the ladder.

 sample input:
 N = 4

 sample output:
 7

*/

// TC O(3^n)

#include<iostream>
using namespace std;

int countWays(int n){
  //Base
  if(n==0){
    return 1;
  }

//prevent to call function for negative value of n
  if(n < 0){
    return 0;
  }

  //Recursive
  return countWays(n-1) + countWays(n-2) + countWays(n-3);

}
int main(){

int n;
cin>>n;
cout<<countWays(n)<<endl;

return 0;
}
