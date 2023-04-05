#include<bits/stdc++.h>
using namespace std;

class maxheap{
    vector<int>a;
    public:
    
    maxheap(vector<int>arr){
       for(int i=1;i<arr.size();i++){
        int child=i;
        int parent=(i-1)/2;
        while(arr[child]>arr[parent]){
            swap(arr[child],arr[parent]);
            child=parent;
            parent=(child-1)/2;
        }
       }
    }
    
    void front(){
        cout<<a[0];
    }
    void push(int val){
        int end=a.size();
        a[end];
    }
    void size(){
        int end=a.size();
        
    }

    void pop(){
        
    }

};