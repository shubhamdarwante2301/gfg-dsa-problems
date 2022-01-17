//Design a Data Structure with Min and Max operations


#include<iostream>
#include<deque>
using namespace std;

struct minmax
{
    deque<int> dq;

    int getMin()
    {
        return dq.front();
    }

    int getMax()
    {
        return dq.back();
    }

    void insertMin(int x)
    {
        dq.push_front(x);
    }

    void insertMax(int x)
    {
        dq.push_back(x);
    }

    int deleteMin()
    {
        int minVal = dq.front();
        dq.pop_front();
        return minVal;
    }

    int deleteMax()
    {
        int maxVal = dq.back();
        dq.pop_back();
        return maxVal;
    }
};

int main()
{
    minmax m;
    m.insertMin(10);
    m.insertMin(5);

    m.insertMax(20);
    m.insertMax(30);

    cout<<m.getMax()<<endl;
    cout<<m.getMin()<<endl;
    return 0;
}
