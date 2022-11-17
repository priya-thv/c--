#include<iostream>
#include<vector>
using namespace std;

void printarray(int n,int array[5]){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
   int arr[5]={1,2,3,4,5};
   printarray(5,arr);
   return 0;
}