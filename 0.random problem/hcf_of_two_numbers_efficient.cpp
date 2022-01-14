//hcf of two numbers efficient
//time complexity O(log n)

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int main()
{
    cout<<gcd(18, 12)<<endl;
}