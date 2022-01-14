//lcm of two numbers
//formule (num1 * num2) / gcd(num1, num2) = lcm(num1, num2)

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
    int lcm = (12 * 18) / gcd(12, 18);
    cout<<"lcm of "<<12<<" and "<<18<<" = "<<lcm<<endl;
}