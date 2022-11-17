#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
   vector<vector<int>>A;
   

  for(int i=0;i<n;i++){
    vector<int>w(n);
    for(int j=0;j<i;j++){
        int b=1;
        w.push_back(b);
        b++;
    }A.push_back(w);
  }

  for(int k=0;k<n;k++){
    for(int l=0;l<k;l++){
        cout<<A[k][l]<<" ";
    }cout<<endl;
  }

return 0;
    
}