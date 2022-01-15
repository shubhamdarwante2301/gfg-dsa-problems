//queue using linked list
//all operation in O(1) time complexity
//https://ide.geeksforgeeks.org/tOrmkC3yTL

#include <iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    int size;
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    
    bool isEmpty()
    {
        if(front == NULL)
            return true;
        else
            return false;
    }
    
    int getSize()
    {
        return size;
    }
    
    void enQue(int x)
    {
        Node *temp = new Node(x);
        if(isEmpty())
            front=rear=temp;
            size++;
            return;
            
        rear->next = temp;
        rear = temp;
        size++;
    }
    
    void deQue()
    {
        if(isEmpty())
            cout<<"Queue is already empty"<<endl;
            return;
        
        Node *temp = front;
        front = front->next;
        if(front == NULL)
            front=rear=NULL;
        delete(temp);
        size--;
    }
    
    Node *getFront()
    {
        return front;
    }
    
};
            
        

int main() {
	Queue q;
	q.enQue(10);
	q.enQue(20);
	q.enQue(30);
	q.enQue(40);
	q.deQue();
	cout<<q.getFront()<<endl;
	cout<<q.getSize()<<endl;
	return 0;
}