#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>A;
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}