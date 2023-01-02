#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin>>n;
    vector<float>a(n);
    float start=0;
    
    float mid=0;
    
    cout<<"enter the element:"<<endl;

    for(float i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter the no. whose square root we want to search:"<<endl;
    
     float target;
    
     cin>>target;
     float end=n-1;
    
     cout<<"target is: "<<target<<endl;
    
    while(start<=end){
        mid=(start+end)/2;
    
        cout<<"the start is: "<<start;
    
        cout<<" and end is: "<<end<<endl;
    
        if((target/mid)==mid){
    
            cout<<"square of"<<mid;
            
            break;

        }else if((target/mid)>mid){
    
            start=mid+1;
    
        }else if((target/mid)<mid){
    
            end=mid-1;
        }
    }

   
    return 0;

    

}