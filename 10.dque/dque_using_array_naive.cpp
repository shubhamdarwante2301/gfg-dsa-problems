//deque using array naive
//insertFront() and deleteFront() are O(n) time operations

//https://ide.geeksforgeeks.org/V2QJLyGYP8

#include <iostream>
using namespace std;

struct deque
{
    int *arr;
    int cap, size;
    deque(int c)
    {
        cap = c;
        arr = new int[cap];
        size = 0;
    }
    
    int getSize()
    {
        return size;
    }
    
    bool isFull()
    {
        bool key = ((size == cap) ? true : false);
        
        return key;
    }
    
    bool isEmpty()
    {
        bool key = ((size == 0) ? true : false);
        return key;
    }
    
    int getFront()
    {
        int key = ((size != 0) ? arr[0] : -1);
        
        return key;
    }
    
    int getRear()
    {
        int key = ((size != 0) ? arr[size-1] : -1);
        return key;
    }
    
    void insertFront(int x)
    {
        if(isFull() == true)
        {
            cout<<"dque is already full"<<endl;
        }
        else
        {
            for(int i=size-1; i>=0; i--)
                arr[i] = arr[i+1];
        }
        
        arr[0] = x;
        size++;
    }
    
    void deleteFront()
    {
        if(isEmpty() == true)
        {
            cout<<"dque is already empty"<<endl;
        }
        else
        {
            for(int i=0; i<size-1; i++)
                arr[i] = arr[i+1];
        }
        
        size--;
    }
    
    void insertRear(int x)
    {
        if(isFull() == true)
        {
            cout<<"dque is already full"<<endl;
        }
        else
        {
            arr[size] = x;
            size++;
        }
    }
    
    void deleteRear()
    {
        if(isEmpty() == true)
        {
            cout<<"dque is already empty"<<endl;
        }
        else
        {
            arr[size-1] = 0;
            size--;
        }
    }
};

int main() {
	deque dq(10);
	dq.insertFront(10);
	dq.insertFront(20);
	cout<<dq.getFront()<<endl;
	dq.insertRear(30);
	dq.insertRear(40);
	cout<<dq.getRear()<<endl;
	cout<<dq.getSize()<<endl;
	return 0;
}