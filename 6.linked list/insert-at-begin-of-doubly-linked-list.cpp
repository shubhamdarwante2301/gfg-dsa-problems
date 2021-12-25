//insert at the begin of doubly linked list
//time complexity O(1)

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node (int x)
    {
        data = x;
        prev =NULL;
        next = NULL;
    }
};

Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }
    temp->next = head;
    if(head != NULL)
        head->prev = temp;
    
    return temp;
    
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

int main() {
    Node *head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    
    print(head);
	return 0;
}