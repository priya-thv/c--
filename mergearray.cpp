#include <bits/stdc++.h>
using namespace std;

void mergetwoarrays(int arr[], int arr2[], int m, int n)
{
    int arr[m];
    int arr[n];
    while (arr[m] != NULL && arr2[n] != NULL)
    {
       if(arr[m]<arr2[n]){
        cout<<arr[m];
       } else{
        cout<<arr2[n];
       }
    }
    while(arr[m]!=NULL){
        cout<<arr[m];
    }

     while(arr2[n]!=NULL){
        cout<<arr[n];
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m];
    int arr2[n];

    for(int i=0;i<m;i++){
        cin>>arr[m];
    }
    for(int i=0;i<m;i++){
        cout<<arr[m];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }

    cout<<mergetwoarrays(arr,arr2)


}