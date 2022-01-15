//reverse queue
//time complexity O(n)
//space complexity O(n)
//https://ide.geeksforgeeks.org/LjvEaYf36h

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> s;
    while(q.empty()==false)
    {
        s.push(q.front());
        q.pop();
    }
    
    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
    
    return q;
}

int main() {
	queue<int> q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	queue<int> a = rev(q);
	while(a.empty() == false)
	{
	    cout<<a.front()<<" ";
	    a.pop();
	}
	return 0;
}