//decimal to binary conversion using recursion
//https://ide.geeksforgeeks.org/xO6eTBrrVY

#include <iostream>
using namespace std;

void binary(int n)
{
    if(n==0)
        return;
    
    binary(n/2);
    cout<<(n%2);
}

int main() {
	int n;
	cout<<"enter a number "<<endl;
	cin>>n;
	binary(n);
	return 0;
}
