#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insert(Node *head, int data)
{
    Node *temp = new Node(data);
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

Node *insertMiddle(Node *head, int data)
{
    Node *temp = new Node(data);
    
    Node *T = head;
    Node *H = head;
    
    while(H != NULL)
    {
        if(H->next == NULL || H->next->next == NULL)
        {
            break;
        }
        T = T->next;
        H = H->next->next;
    }
    
    temp->next = T->next;
    T->next = temp;
    
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

int main() {
	Node *head = NULL;
	
	head = insert(head, 10);
	head = insert(head, 20);
	head = insert(head, 30);
	head = insert(head, 40);
	
	


	
	cout<<"before inserting node at middle"<<endl;
	print(head);
	cout<<endl;
	
	head = insertMiddle(head, 25);
	cout<<"after inserting node at middle"<<endl;
	print(head);
	return 0;
}