#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int target){
  int start=0;
  int end=n-1;
  
  for(int i=0;i<n;i++){
    int mid=(start+end)/2;
    if(target==arr[mid]){
      return mid;
    }else if(target>arr[mid]){
      start=mid+1;
    }else if(target<arr[mid]){
      end=mid-1;
    }
  }

}

int main(){
      int n;
      cin>>n;
      int arr[n];

      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int target;
      cin>>target;
      cout<<binarysearch(arr,n,target);
}