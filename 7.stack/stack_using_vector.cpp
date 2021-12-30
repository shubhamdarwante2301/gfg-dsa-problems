//stack using vector
//dynamic size stack

#include <iostream>
#include<vector>
using namespace std;

struct MyStack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
        return;
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    bool isEmpty()
    {
        return v.empty();
    }
    int size()
    {
        return v.size();
    }
};

int main() {
	MyStack s;
	s.push(10);
	s.push(20);
	s.push(30);
	
	cout<<s.peek()<<endl;
	cout<<s.size()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.isEmpty()<<endl;
	
	return 0;
}