#include<iostream>
using namespace std;


 int start=0;
    int end=arr.size();
    int pivot;
     pivot=(start+end)/2;
    
       
        for(int j=0;j<end;j++){
           
            if(arr[j]<arr[pivot]){
                arr.insert(arr.begin(),arr[j]);
                
            }else if(arr[j]>arr[pivot]){
                 arr[end-1] = arr[j];
             }
        }
    
    
    return arr;