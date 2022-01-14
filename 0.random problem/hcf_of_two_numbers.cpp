//Highest Common Factor of two numbers

#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout<<"enter two numbers"<<endl;
	cin>>num1>>num2;
	
	int small = min(num1, num2);
	int i;
	for(i=small; i>=1; i--)
	{
	    if(num1%i==0 && num2%i==0)
	    {
	        break;
	    }
	}
	
	cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<i<<endl;
	
	
	return 0;
}