//insert at the end of the doubly linked list
//time complexity O(N)

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

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
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
    temp->prev = curr;
    
    return head;
    
}

Node *reverse (Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr = curr->prev;
    }

    return prev->prev;
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
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    
    cout<<"before reversing the linked list"<<endl;
    print(head);
    cout<<endl;
    
    cout<<"after reversing the linked list"<<endl;
    head = reverse(head);
    print(head);

	return 0;
}