#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *createnode(int data)
{
    node *newnode = new node();
    newnode->data = data;
       return newnode;
}

void traverse(node *head)
{
    cout << "null->";
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
void insertathead(node *&head, int data)
{
    node *newnode = new node();
    newnode->data = data;
    if(head==NULL){
        head=newnode;
    }else{
        newnode->next=head;
        head=newnode;
    }
}


int main()
{
    node *head = NULL;
    node *temp = NULL;
    int n;
    cin >> n;
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
    }
    traverse(head);
    cout << endl;
    insertathead(head, 65);
    traverse(head);
}