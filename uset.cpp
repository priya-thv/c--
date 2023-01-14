#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    
    unordered_set<int>s;

    s.insert(10);
    s.insert(5);
    s.insert(1);
    s.insert(8);
    s.insert(4);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}