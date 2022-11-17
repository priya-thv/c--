#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,sum=0,sum2=0;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
         cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }cout<<endl<<sum;
    

    for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
        sum2=sum2+arr[i][j];

    }cout<<endl<<sum2;
    }
    }
