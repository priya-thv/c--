#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,i,score=0,score1=0;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++){
        
        cin>>a[i];
        
    }

    for(int i=0;i<n;i++){
         
        cin>>b[i];
        
    }for(int i=0;i<n;i++){
        if(a[i]>b[i]){
        score++;
    }else if(b[i]>a[i]){
        score1++;
    }
    }
cout<<score<<" "<<score1;
return 0;
    
}
