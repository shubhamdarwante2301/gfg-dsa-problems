//delete head node in linked list
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

Node *deleteHead(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    
    if(head->next == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete(temp);
        return head;
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

int main() {
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    
    cout<<"before deleting head"<<endl;
    print(head);
    cout<<endl;
    
    cout<<"after deleting head"<<endl;
    head = deleteHead(head);
    print(head);
    
	return 0;
}