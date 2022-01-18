//dque using stl

#include<iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    //insert element at front
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    //insert element at back
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);

    //pop front element in deque
    dq.pop_front();

    //pop last element in deque
    dq.pop_back();

    //delete i'th element from the deque
    dq.erase(dq.begin()+3);

    //delete range in deque
    dq.erase(dq.begin()+1, dq.begin()+3);

    //delete all element in deque
    dq.clear();

    //print size of deque
    cout<<dq.size()<<endl;

    //print front element in deque dq[0]
    cout<<dq.front()<<endl;

    //print last element in deque dq[size-1]
    cout<<dq.back()<<endl;

}