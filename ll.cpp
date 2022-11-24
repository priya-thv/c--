#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
   

   node(int new_data){
    data=new_data;
    new_data=0;
   }
};
   void insertvalue(node*head,int new_data)
    {
        node*element=new node(new_data);  
    if(head==NULL){
       head=element;
       
       return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }cout<<endl;
    }
    
    }
    int main(){
        node*head=NULL;
        node*temp;
        insertvalue(head,1);
        insertvalue(head,3);
        insertvalue(head,4);
        insertvalue(head,5);
        insertvalue(head,6);
        insertvalue(head,8);
        

    }
    
   



