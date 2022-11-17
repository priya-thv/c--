#include<iostream>
using namespace std;


int main(){
    for( int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//reverse printing of stars

/*

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"#";
        }cout<<endl;
    }
}
*/
