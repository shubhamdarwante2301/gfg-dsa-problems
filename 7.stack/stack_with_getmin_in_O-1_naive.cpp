//program to get minimum element in stack in O(1) time
//it requires O(n) space complexity

#include <iostream>
#include <stack>
using namespace std;

struct myStack
{
    stack<int> s;
    stack<int> aux;
    
    void push(int x)
    {
        if(s.empty())
        {
            s.push(x);
            aux.push(x);
        }
        else if(aux.top() >= x)
        {
            s.push(x);
            aux.push(x);
        }
        else
        {
            s.push(x);
        }
    }
    
    void pop()
    {
        if(s.top() == aux.top())
        {
            aux.pop();
        }
        s.pop();
    }
    
    int top()
    {
        return s.top();
    }
    
    int getmin()
    {
        return aux.top();
    }
};

int main() {
	myStack ms;
	ms.push(10);
	ms.push(20);
	ms.push(5);
	ms.push(30);
	ms.push(2);
	
	cout<<ms.getmin();
	
	
	return 0;
}