//delet the head element of the singly linked list

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

Node *deleteHead(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete(head);

        return temp;
    }
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

    head = deleteHead(head);
    
    print(head);
    return 0;
}