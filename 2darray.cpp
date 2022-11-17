#include<iostream>
#include<vector>
using namespace std;


int main(){
   int m,n,i,j,sum=0,multiply=1;
    //cin>>m>>n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
      
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum=sum+arr[i][j];
                multiply=multiply*arr[i][j];
            }
        }cout<<sum<<" "<<multiply;
    return 0;
}