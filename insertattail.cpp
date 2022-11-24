#include <iostream>
using namespace std;

struct node
{

    int data;
    node *next;
};
node *createNode(int data)
{
    node *newNode = new node();

    newNode->data = data;

    return newNode;
}

void traverse(node *head)
{
    cout << "head->";

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
void insertAtTail(node *head, int data)
{
    node *newnode=new node();
    newnode->data=data;
    if(head==NULL){
        head=newnode;
    }else{
        while(head->next!=NULL){
            head=head->next;
        }head->next=newnode;
        cout<<"NULL";
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
            head = createNode(t);
            temp = head;
        }
        else
        {
            temp->next = createNode(t);
            temp = temp->next;
        }
    }

    traverse(head);
    insertAtTail(head, 68);
    cout << endl
       << "hey" << endl;
    traverse(head);
}
