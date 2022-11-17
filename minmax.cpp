#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5];
    int max=0,min=arr[1],sum1=0,sum2=0,sum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }for(int i=0;i<5;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            
        }for(int i=0;i<5;i++){
            sum=sum+arr[i];
        }
        sum1=sum-max;
        sum2=sum-min;
        cout<<sum1<<" "<<sum2;
        return 0;
}