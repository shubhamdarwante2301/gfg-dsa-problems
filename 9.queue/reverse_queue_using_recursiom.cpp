//reverse queue using recursion

#include <iostream>
#include<queue>
using namespace std;

void rev(queue<int> &q)
{
    if(q.empty())
    {
        return;
    }
    int x = q.front();
    q.pop();
    rev(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    rev(q);

    while(q.empty()==false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}