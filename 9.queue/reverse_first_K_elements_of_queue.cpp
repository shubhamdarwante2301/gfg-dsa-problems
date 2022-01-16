//Reverse First K elements of Queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> rev(queue<int> q, int k)
{
    stack<int> s;
    int i=1;
    while(i<=k)
    {
        s.push(q.front());
        q.pop();
        i++;
    }
    
    while(s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
    
    int rem = q.size() - k;
    
    while(rem != 0)
    {
        q.push(q.front());
        q.pop();
        rem--;
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
	int k = 3;
	
	queue<int> ans = rev(q, k);
	
	while(ans.empty() == false)
	{
	    cout<<ans.front()<<" ";
	    ans.pop();
	}
	return 0;
}