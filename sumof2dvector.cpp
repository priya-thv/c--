#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    vector<vector<int>>a;

    for(int i=0;i<n;i++){
        vector<int>xyz;
        for(int j=0;j<n;j++){
            int w=0;
            cin>>w;
            xyz.push_back(w);
        }
        a.push_back(xyz);
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            cout<<a[k][l]<<" ";
        }cout<<endl;
    }

    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            sum=sum+a[k][l];
        }
    }
    cout<<sum;
    return 0;
}