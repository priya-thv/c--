#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,sum=0,sum1=0,sum2=0;
    cin>>n;
    vector<long>a(n);
    
    
     for(long i=0;i<n;i++){
        cin>>a[i];
        

     }long max=a[0];
     for(int i=0;i<n;i++){
       if(a[i]>max){
        max=a[i];

       }

     }int min=a[0];
     for(int i=0;i<n;i++){
            
        if(a[i]<min){
            min=a[i];
        }
     }for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        sum1=sum-max;
        sum2=sum-min;
        cout<<sum1<<" "<<sum2<<endl;
        cout<<min<<","<<max;
     return 0;

}