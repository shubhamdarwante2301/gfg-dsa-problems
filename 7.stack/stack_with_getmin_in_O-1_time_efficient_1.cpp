//in stack get minimum element in O(1) time
//it requires O(1) auxilary space
//it is possible when only positive element insert into a stack

#include <iostream>
#include <stack>
using namespace std;

struct myStack
{
    stack<int> s;
    int min;
    
    void push(int x)
    {
        if(s.empty())
        {
            min = x;
            s.push(x);
        }
        else if(x <= min)
        {
            s.push(x-min);
            min = x;
        }
        else
        {
            s.push(x);
        }
    }
    
    int pop()
    {
        int t = s.top();
        s.pop();
        if(t <= 0)
        {
            int res = min;
            min = min - t;
            return res;
        }
        else
        {
            return t;
        }
    }
    
    int top()
    {
        int t = s.top();
        return (t<=0) ? min : t;
    }
    
    int getmin()
    {
        return min;
    }
    
};

int main() {
	myStack s;
	s.push(4);
    s.push(5);
    s.push(8);
    s.push(2);
    s.push(1);
    s.pop();
    
    cout<<s.getmin();
	return 0;
}