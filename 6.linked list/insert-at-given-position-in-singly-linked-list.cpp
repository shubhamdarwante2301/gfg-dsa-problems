//insert at given position in singly linked list

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertAtPos(Node *head, int x, int pos)
{
    Node *temp = new Node(x);
    if(pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    
    for(int i=1; i<=pos-2 && curr!=NULL; i++)
    {
        curr = curr->next;
    }
    if(curr == NULL)
    {
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;

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
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    head = insertAtPos(head, 25, 6);
    

    print(head);

    return 0;
}