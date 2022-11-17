#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a;

    for(int i=0;i<n;i++){
        vector<int>temparray;
       for(int j=0;j<m;j++){
        int temp=0;
        cin>>temp;
        temparray.push_back(temp);
       }
       a.push_back(temparray);
    }


    for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            cout<<a[k][l]<<" ";
        }
    cout<<"\n";
    }


}