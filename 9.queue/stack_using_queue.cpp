//stack using queue

#include <iostream>
#include <queue>
using namespace std;

struct stack
{
    queue<int> q1, q2;
    
    int size()
    {
        return q1.size();
    }
    
    int top()
    {
        return q1.front();
    }
    
    void pop()
    {
        q1.pop();
        return;
    }
    
    void push(int x)
    {
        while(q1.empty() == false)
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.push(x);
        
        while(q2.empty() == false)
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main() {
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	
	cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.push(40);
	cout<<s.top()<<endl;

	
	
	return 0;
}