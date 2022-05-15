#include<bits/stdc++.h>
using namespace std;

 int print(int index,int s,int arr[],int n,int sum){

   //CONDITION NOT SATISTFIED
   //STRICTLY DOWN IR ARRAY CONTAINS POSITIVES ONLY
   if(s>sum) return 0;
 //Conditon satisfied
  if(index==n){
   if(s==sum){
      // for(auto it:v){
      //   cout<<it<<" ";
      // }
      // cout<<endl;
      return 1;
    }
   //CONDITION NOT SATISFIED
    else return 0;
  }

  //v.push_back(arr[index]);
  s+=arr[index];
 int l = print(index+1,s,arr,n,sum);

  //v.pop_back();
  s-=arr[index];
  int r = print(index+1,s,arr,n,sum);

  return l+r;

}


int main(){

int n,sum;
cin>>n>>sum;
int arr[n];

for(int i=0;i<n;i++){
  cin>>arr[i];
}

//vector<int>v;
//print(0,0,arr,n,v,sum)
cout<<print(0,0,arr,n,sum)<<endl;


return 0;
}
