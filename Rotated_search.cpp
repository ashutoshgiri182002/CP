/*

Write a function that takes input an sorted array of distinct,which is rotated a pivot point
and finds the index of any given element.

Sample input:
[7,9,10,,1,2,3,4,5,6]
element = 4

Sample output:
6
*/

#include<iostream>
#include<vector>
using namespace std;

int rotated_search(vector<int>a,int key){
  int n = a.size();

  //Logic
  int s = 0;
  int e = n-1;

  while(s<=e){
    int mid = (s+e)/2;

    if(a[mid]==key){
      return mid;
    }

    //2 cases
    if(a[s]<=a[mid]){
      //left
      if(key>=a[s] and key <=a[mid]){
        e = mid-1;
      }
      else{
        s = mid + 1;
      }

    }
    else{
      //right
      if(key>=a[mid] and key<=a[e]){
        s = mid + 1;
      }
      else{
        e = mid -1;
      }
    }
  }
  return -1;
}


int main(){

vector<int>a{4,5,6,7,0,1,2,3};
int key;
cin>>key;
cout<<rotated_search(a,key)<<endl;
return 0 ;
}
