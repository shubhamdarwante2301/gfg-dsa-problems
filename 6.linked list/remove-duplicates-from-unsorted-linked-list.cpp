//remove duplicate node from unsorted linked list
//time complexity O(N)
//space complexit O(N)

#include<iostream>
#include<map>
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

Node *removeDuplicate(Node *head)
{
    map<int, int> m;
    
    Node *curr = head;
    m[curr->data] = 1;
    Node *prev = curr;
    curr = curr->next;
    
    while(curr != NULL)
    {
        if(m[curr->data])
        {
            prev->next = curr->next;
            free(curr);
        }
        else
        {
            m[curr->data] = 1;
            prev = prev->next;
        }
         curr = curr->next;
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
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 30);
    head = insert(head, 50);
    head = insert(head, 40);
    head = insert(head, 40);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 40);

    cout<<"before removeing duplicate element"<<endl;
    print(head);
    cout<<endl;

    head = removeDuplicate(head);
    cout<<"after removeing duplicate element"<<endl;
    print(head);
    return 0;
}