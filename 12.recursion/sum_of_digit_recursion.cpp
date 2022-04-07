//sum of digit of given number using recursion
//https://ide.geeksforgeeks.org/ZHQk96HkAJ
#include <iostream>
using namespace std;

int sumOfDigit(int n, int k)
{
    if(n==0)
    {
        return k;
    }
    
    return sumOfDigit(n/10, k+(n%10));
}

int main() {
	int n = 9987;
	int k = sumOfDigit(n, 0);
	cout<<"sum digit of given number is "<<k<<endl;
	return 0;
}