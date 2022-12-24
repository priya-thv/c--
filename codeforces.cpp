#include<bits/stdc++.h>
using namespace std;
#define int long long

int getmaxindexofelementnotgreater(vector<int>A,int target){
    int low=0,high=A.size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }return high;

}

void solve(){
    int n,k,a;
    cin>>n>>k;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
        while(k--){
            cout<<getmaxindexofelementnotgreater(A,a)<<endl;
        }
    }

}
singed main(){
    solve();
    return 0;
}
