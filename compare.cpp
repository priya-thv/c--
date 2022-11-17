
#include<iostream>

using namespace std;

int main(){
    
    int max=0,max2=0;
   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[i])
            {max=a[j];}
            else if(a[j]<=max){
                max2=a[j];
            }
        }        
    }cout<<max<<" "<<max2;
        
}