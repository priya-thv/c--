#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    vector<int>arr(n);
    int i=0;
    while(i<n){
        cin>>arr[i];
        sum=sum+arr[i];
        i++;
    
    }cout<<"sum"<<sum;

    return 0;
}