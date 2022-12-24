#include <iostream>
using namespace std;

struct node
{
    int coff;
    int exp;
    node *next;
};

node *createnode(int coff, int exp)
{
    
     node *newnode = new node();
    newnode->coff = coff;
    newnode->exp = exp;
    return newnode;
}

node *getlinkedlist(int size)
{
    cout << "head->";
    while (size != 0)
    {
        cout << size->d << "->";
    }
}
node *product(node *head, int coff, int exp)
{
    node *ansnode = NULL;
    node *tail;
    while (head != NULL)
    {
        node *newnode = createnode(head->coff * coff, head->exp * exp)
        {
            if (anshead == NULL)
            {
                anshead = newnode;
                tail = anshead;
            }
            else
            {
                tail->next = newnode;
                tail = tail->next;
            }
            head = head->next;
        }
    }
    return ansnode;
}

node*addtwopolynomials(node*head,node*head2)
{
    node*anshead=NULL;
    node*tail=NULL;
    while(head!=NULL){
        node*temp=head2;
        int coff=head->coff;
        while(temp!=NULL){
            if(temp->exp=head->exp){
                coff=coff+temp->coff;
                temp->coff=0;
            }
        }
    }node*newnode=createnode(coff,head->exp);
    if(anshead==NULL){
        anshead=newnode;
        tail=anshead;
    }else{
        tail->next=newnode;
        tail=tail->next;
    }
while(head2!=NULL){
    if(head2->coff!=0){
        node*newnode=createnode(head->coff,head->exp);
       if(anshead==NULL){
        anshead=newnode;
        tail=anshead;
       }else{
        tail->next=newnode;
        tail=tail->next;
       }

    }
}
}


void *multiplypolynomial(node *head, node *head2)
{
    node *anshead = NULL;
    while (head != NULL)
    {
        node *prod = product(head, head->coff, head->exp);
        anshead = addtwopolynomials(anshead, prod);
        head = head->next;
    }
    return anshead;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    node *head = getlinkedlist(n);
}
int main()
{
    
}
