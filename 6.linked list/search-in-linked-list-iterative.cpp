//search an element in linked list and return the position
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
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
    
    Node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
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

int search(Node *head, int x)
{
    if(head == NULL)
    {
        return -1;
    }
    Node *curr = head;
    int a=0;
    while(curr != NULL)
    {
        a++;
        if(curr->data == x)
        {
            return a;
        }
        curr = curr->next;
    }
    return -1;
}
int main() {
    Node *head = NULL;
    
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    
    print(head);
    cout<<endl;
    int pos = search(head, 10);
    cout<<pos;
	return 0;
}