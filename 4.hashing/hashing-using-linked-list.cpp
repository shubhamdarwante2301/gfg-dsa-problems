#include<iostream>
#include<list>
using namespace std;

struct MyHash{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }
    void insert(int num)
    {
        int i = num % BUCKET;
        table[i].push_back(num);
    }
    void del(int k)
    {
        int j = k % BUCKET;
        table[j].remove(k);
    }
    int search(int m)
    {
        int n = m % BUCKET;
        for(auto x:table[n])
        {
            if(x == m)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    MyHash mh(10);
    mh.insert(10);
    mh.insert(20);
    mh.insert(30);
    mh.insert(40);
    mh.del(30);
    cout<<mh.search(30);
    return 0;
}