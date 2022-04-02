//print_n_to_1_numbers using recursion
//https://ide.geeksforgeeks.org/qj10gmu9Fl

#include <iostream>
using namespace std;

void print(int n)
{
    if(n==0)
        return;
    
    cout<<n<<" ";
    print(n-1);
}

int main() {
	int n;
	cout<<"enter a number "<<endl;
	cin>>n;
	
	print(n);
	return 0;
}