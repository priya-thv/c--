#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void push(Node*temp){
    cout<<"head->";

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }     cout<<"NULL";
}

int main(){
    Node *head;
    Node *temp;
    Node *one=NULL;
    Node *two=NULL;
    Node *three=NULL;

    //assigning location in memory
    one=new Node();
    two=new Node();
    three=new Node();
   //assigning 
   one->data=3;
   two->data=4;
   three->data=6;

   //connectiong
   one->next=two;
   two->next=three;
   three->next=NULL;

   head=one;
    //traversing
    temp=one;

   // push(temp);  

    //insert at tail
   while(temp->next==NULL){
    
     Node *tail=new Node();
        tail->data=7;
        temp->next=tail;
        tail->next=NULL;
    
 }
    push(temp);
}
