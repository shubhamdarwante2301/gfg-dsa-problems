//two stack in one array

#include <iostream>
using namespace std;

struct myStack
{
    int *arr;
    int cap;
    int top1;
    int top2;
    myStack(int n)
    {
        cap = n;
        arr = new int[n];
        top1 = -1;
        top2 = cap;
    }
    
    void push1(int x)
    {
        if(top1 < top2-1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout<<"stack1 is overflow"<<endl;
            exit(1);
        }
    }
    
    void push2(int x)
    {
        if(top1 < top2-1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout<<"stack2 overflow"<<endl;
            exit(1);
        }
    }
    
    int pop1()
    {
        if(top1 >=0)
        {
            int res = arr[top1];
            top1--;
            return res;
        }
        else
        {
            cout<<"stack1 does not have an element to pop"<<endl;
            exit(1);
        }
    }
    
    int pop2()
    {
        if(top2 < cap)
        {
            int res = arr[top2];
            top2++;
            return res;
        }
    }
            
};

int main() {
	myStack s(5);
	s.push1(10);
	s.push2(20);
	s.push1(30);
	s.push2(40);
	cout<<s.pop1()<<endl;
	return 0;
}