#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
 /*   unordered_map<string,int>umap;
    umap["prince"]=44;
    umap["su to mo"]=56;
    umap["gu wei yi"]=59;
    umap["gu yi"]=60;

  for(auto x:umap){
       cout<<x.first<<" "<<x.second<<endl;//first=key second value
  }
 for(auto itr=umap.begin();itr!=umap.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
 }*/
 /*string key="prince";
 if(umap.find(key)!=umap.end()){
    cout<<"key found";
 }
 umap.insert(make_pair("hello",36));*/

 int arr[]={1,1,3,6,8,6,4,0,3,7};
 unordered_map<int,int>umaped;
 for(int i=0;i<10;i++){
    int key=arr[i];
    umaped[key]++;

    

 }
 for(auto itr=umaped.begin();itr!=umaped.end();itr++){
    cout<<"key is:"<<itr->first<<"and the value is:"<<" "<<itr->second<<endl;

}
}