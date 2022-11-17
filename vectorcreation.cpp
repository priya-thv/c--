#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    int temp=0;
    
    for(int i=0;i<n;i++){
        cin>>A[i];
        A.push_back(temp);
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    
    return 0;
}