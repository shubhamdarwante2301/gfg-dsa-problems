//rotate deque

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    for(int i=dq.size()-1; i>=2; i--)
    {
        int x= dq.back();
        dq.pop_back();
        dq.push_front(x);
    }

    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
}