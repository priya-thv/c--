#include<iostream>
using namespace std;

struct student{
    int age;
    int marks;
    string name;
    student*next;
    int data;
};

student* createnode(int val)
{
    student *temp =new student;
    temp->data=val;
    return temp;
}

void printlinkedlist(student*head){
    if(head==NULL){
        cout<<"YES";
    }while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;

    }
  cout<<"NULL"<<endl;   
}

int main(){
    int n;
    cin>>n;
}


