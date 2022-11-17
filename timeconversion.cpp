#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
#include<string.h>
int main(){
    int sum=0;
    
    string t;
    string h,m,s;

    h=t[0];
    h+=t[1];
    
    m=t[3];
    m+=t[4];

    s=t[6];
    s+=t[7];

    int num=stoi(h);
    if(t[8]=='P')
    {
        num+=12;
        h=to_string(num);

    }else if (t[8]=='A'&&num==12)
    {
        cout<<h<<":"<<m<<":"<<s;
    }
    
    cout<<h<<":"<<m<<":"<<s;
    return 0;
}