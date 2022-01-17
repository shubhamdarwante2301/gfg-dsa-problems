//dque using stl

#include<iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);

    cout<<dq.size()<<endl;

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

}