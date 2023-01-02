#include <iostream>
using namespace std;

// you can also use class
struct Node
{
    int data;
    Node *next;
};

/**
 * newNode function will return a node with data as val
 * */
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    return temp;
}

/**
 * createLinkedList will read the `n` inputs from user and will create a linked list of size `n`
 * */
Node *createLinkedList(int n)
{
    cin >> n;
    Node *head=NULL;
    Node *tem=NULL;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (head == NULL)
        {
            head = newNode(t);
            tem = head;
        }
        else
        {
            tem->next = newNode(t);
            tem = tem->next;
        }
    }return head;

}

/**
 * printLinkedList will print all the elemets of linked list
 * */
void printLinkedList(Node *head)
{
    while (head != NULL) // in this the loop will run until it its not null basically it will stop just before null node
    {
        cout << head->data << "->"; // head->data will print head data
        head = head->next;
    }

    cout << "NULL";
}


int main()
{
    // your code goes here
    int n;
    cin >> n;
    Node *head = createLinkedList(5);
    cout << "printing List";

    printLinkedList(head);
    return 0;
}