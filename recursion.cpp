#include<iostream>
using namespace std;


int fib(int n){
    cout<<"calculating fib of n"<<n<<endl;
    if(n==0||n==1){
        return n;
    
    }return  fib(n-1)+fib(n-2);


};

int main(){
     int n;
     cin>>n;
    cout<< fib(n);
}