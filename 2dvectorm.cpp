#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>array;
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        array.push_back(temp);
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            cout<<array[k][l]<<" ";
        }cout<<endl;
    }
}