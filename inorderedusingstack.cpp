#include<bits/stdc++.h>
using namespace std;



class Treenode{
    public:
    vector<int>inorder(Treenode*root){
    vector<int>A;
    stack<Treenode*>s;
    if(root) s.push(root);

    while(!s.empty()){
        Treenode*temp=s.top();
        if(temp->left){
            s.push(temp->left);
            temp->left=NULL;
        }else{
            A.pushback(temp->val);
            s.pop();

        }if(temp->right) s.push(temp->right);
    }return A;
}
};