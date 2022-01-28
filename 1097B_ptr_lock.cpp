/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int flag =0;

   for(int i=0;i<=(1<<n)-1;i++){
       int sum =0;
       for(int bit =0;bit<n;bit++){

           if(i & (1<<bit)){
              sum = sum+arr[bit];
           }
           else{
               sum =sum -arr[bit];
           }
       }
       if(sum%360==0){
           flag =1;
           break;
       }

   }

   if(flag==1){
       cout<<"YES"<<endl;
   }

   else cout<<"NO"<<endl;


    return 0;
}
