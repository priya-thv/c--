#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;

};

node*createnode(int data){
    node*newnode=new node();
    newnode->data=data;
    return newnode;
}

void traverse(node*head){
    cout<<"head->";

    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL";
}

void insertatany(node*prev_node,int data){
    node*newnode=new node();
    newnode->data=data;
    if(prev_node==NULL){
        prev_node=newnode;
    }else{
        newnode->next=prev_node->next;
        prev_node->next=newnode;

    }
}

int main(){
    node*head=NULL;
    node*temp;
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        int n;
        cin>>n;
        if(head==NULL){
            head=createnode(n);
            temp=head;
        }else{
            temp->next=createnode(n);
            temp=temp->next;
        }
    }
    traverse(head);
    insertatany(head->next,45);
    cout<<endl;
    traverse(head);
}