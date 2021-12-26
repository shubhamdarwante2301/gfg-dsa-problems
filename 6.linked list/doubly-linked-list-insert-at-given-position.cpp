//insert at given position in doubly linked list
//time complexity O(N)

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

Node *insert(Node *head, int data)
{
    Node *new_node = new Node(data);
    if(head == NULL)
    {
        return new_node;
    }

    Node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = new_node;
    new_node->prev = curr;

    return head;
}

Node *insertAt(Node *head, int pos, int data)
{
    Node *new_node = new Node(data);
    Node *curr = head;
    if(pos == 1)
    {
        head->prev = new_node;
        new_node->next = head;
        return new_node;
    }

    for(int i=1; i<pos-1 && curr->next != NULL; i++)
    {
        curr = curr->next;
    }

    if(curr->next == NULL)
    {
        head = insert(head, data);
    }
    else
    {
        new_node->prev = curr;
        new_node->next = curr->next;
        curr->next->prev = new_node;
        curr->next = new_node;

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
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);

    cout<<"before inserting new node"<<endl;
    print(head);
    cout<<endl;

    head = insertAt(head, 3, 25);
    cout<<"after inserting new node"<<endl;
    print(head);
    
    return 0;
}
        