//remove duplicate element from sorted linked list

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insert(Node *head, int x)
{
    Node *temp = new Node (x);
    if(head == NULL)
    {
        return temp;
    }

    Node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    return head;
}

Node *removeDuplicate(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    while(curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
void print(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 30);
    head = insert(head, 30);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 40);
    head = insert(head, 40);
    head = insert(head, 40);
    head = insert(head, 50);

    cout<<"before removeing duplicate element"<<endl;
    print(head);
    cout<<endl;

    head = removeDuplicate(head);
    cout<<"after removeing duplicate element"<<endl;
    print(head);
    return 0;
}