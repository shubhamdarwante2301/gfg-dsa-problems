//queue using array naive
//dqueue operation take O(n) time complexity
//other all operation take only O(1) time
//https://ide.geeksforgeeks.org/QjeounV4S5

#include <iostream>
using namespace std;

struct Queue
{
    int size, cap;
    int *arr;
    Queue(int x)
    {
        cap = x;
        size = 0;
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
        
        arr[size] = x;
        size++;
    }
    
    void deque()
    {
        if(isEmpty())
            cout<<"queue is already empty"<<endl;
        
        for(int i=0; i<size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
    }
    
    int getFront()
    {
        if(isEmpty())
            return -1;
        
        return 0;
    }
    
    int getRear()
    {
        if(isEmpty())
            return -1;
        
        return size-1;
    }
    
    
};

int main() {
    Queue q(10);
    
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    cout<<q.getRear()<<endl;
    q.deque();
    cout<<q.getRear()<<endl;
    
	return 0;
}