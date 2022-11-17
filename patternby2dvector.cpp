#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<int>>A;
    
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=n;j>i;j-- ){
            cout<<"*"<<" ";
        }cout<<endl;
    }
    return 0;
}