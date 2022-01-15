//queue using array efficient
//all the operations are O(1) time
//https://ide.geeksforgeeks.org/9gJaeJTD5z

#include <iostream>
using namespace std;

struct Queue
{
    int size, cap, front;
    int *arr;
    Queue(int x)
    {
        cap = x;
        size = 0;
        front = 0;
        arr = new int[cap];
    }
    
    bool isFull()
    {
        if(size == cap)
            return true;
        else
            return false;
    }
    
    bool isEmpty()
    {
        if(size == 0)
            return true;
        else
            return false;
    }
    
    void enQueue(int x)
    {
        if(isFull())
            cout<<"queue is full"<<endl;
        
        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    
    void deque()
    {
        if(isEmpty())
            cout<<"queue is already empty"<<endl;
        
        front = (front + 1) %cap;
        size--;
    }
    
    int getFront()
    {
        if(isEmpty())
            return -1;
        
        return front;
    }
    
    int getRear()
    {
        if(isEmpty())
            return -1;
        
        return (front + size - 1) % cap;
    }
    
    
};

int main() {
    Queue q(10);
    
    q.enQueue(10);
    cout<<"rear = "<<q.getRear()<<endl;
    q.enQueue(20);
    cout<<"rear = "<<q.getRear()<<endl;
    q.enQueue(30);
    cout<<"front = "<<q.getFront()<<endl;
    q.deque();
    cout<<"front = "<<q.getFront()<<endl;
    
    
	return 0;
}