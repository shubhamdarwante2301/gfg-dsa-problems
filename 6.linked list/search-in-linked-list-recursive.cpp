//search in linked list recursively
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
    
    if(head->data == x)
    {
        return 1;
    }
    else
    {
        int res = search(head->next, x);
        if(res == -1)
        {
            return -1;
        }
        else
        {
            return res+1;
        }
    }
}
int main() {
    Node *head = NULL;
    
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    
    print(head);
    cout<<endl;
    int pos = search(head, 30);
    cout<<pos;
	return 0;
}