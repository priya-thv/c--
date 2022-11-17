#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<arr[i]<<endl;;
    cout<<arr[j];
    return 0;
}