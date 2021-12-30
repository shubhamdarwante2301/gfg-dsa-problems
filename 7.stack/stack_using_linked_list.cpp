//stack using linked list

#include <iostream>
#include <limits.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next =NULL;
    }
};

struct myStack
{
    Node *head = NULL;
    int size;
    
    void push(int x)
    {
        size++;
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    
    int pop()
    {
        if(head == NULL)
        {
            return INT_MAX;
        }
        else
        {
            int res = head->data;
            Node *temp = head;
            head = head->next;
            size--;
            delete(temp);
            return res;
        }
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
    int stackSize()
    {
        return size;
    }
    int peek()
    {
        return (head->data);
    }
    
};

int main() {
	myStack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	return 0;
}