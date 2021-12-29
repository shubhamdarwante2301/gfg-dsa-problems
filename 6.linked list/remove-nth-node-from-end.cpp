//remove nth node from end

#include <iostream>
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

Node *lastElem(Node *head, int x)
{
    Node *start = new Node(x);
    
    start->next = head;
    Node *fast = start;
    Node *slow = start;
    
    for(int i=0; i<x; i++)
    {
        fast = fast->next;
    }
    
    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    slow->next = slow->next->next;
    
    return start->next;
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
    cout<<endl;
    head = lastElem(head, 5);
    print(head);
	return 0;
}