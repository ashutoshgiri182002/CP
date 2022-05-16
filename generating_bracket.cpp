
/*
Write a function to generate all possible n pairs of balanced parentheses'('and')'.

input:
2

output:
()()
(())

*/


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void generateBracket(string output,int n,int open ,int close,int i){
  //base case
  if(i==2*n){
    cout<<output<<endl;
    return;
  }
  //open
  if(open<n){
    generateBracket(output + '(',n,open +1,close,i+1);
  }

  //closing
  if(close < open){
    generateBracket(output + ')' ,n, open,close+1,i+1);
  }

}



int main(){

int n ;
cin>>n;
string output;
generateBracket(output,n,0,0,0);

return 0;
}
