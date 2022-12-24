#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *createnode(int data)
{
    node *newnode = new node();
    newnode->data = data;
    return newnode;
}

void traverse(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

/*void insertatany(node*prev,int data){
    node*newnode=new node();
    newnode->data=data;
    if(prev==NULL){
        prev=newnode;

    }else{
        newnode->next=prev->next;
        prev->next=newnode;
    }
}*/

void pop(node*head,int data){
    head=head->next;
}
int main()
{
    int n;
    cin >> n;
    node *head = NULL;
    node *temp = NULL;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (head == NULL)
        {
            head = createnode(t);
            temp = head;
        }
        else
        {
            temp->next = createnode(t);
            temp = temp->next;
        }
        
    }traverse(head);
    cout<<endl;
    pop();
    traverse(head);
}