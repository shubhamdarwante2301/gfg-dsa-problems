//design a queue data structure using two stack

#include<iostream>
#include<stack>
using namespace std;

struct queue
{
    stack<int> input;
    stack<int> output;

    void push(int x)
    {
        input.push(x);
    }

    void pop()
    {
        if(output.empty() == false)
        {
            output.pop();
        }
        else
        {
            while(input.empty()==false)
            {
                int x = input.top();
                input.pop();
                output.push(x);
            }
            output.pop();
        }
    }

    int front()
    {
        if(output.empty()==false)
        {
            return output.top();
        }
        else
        {
            while(input.empty() == false)
            {
                int x = input.top();
                input.pop();
                output.push(x);
            }
            return output.top();
        }
    }

    int size()
    {
        return input.size() + output.size();
    }
};

int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
}