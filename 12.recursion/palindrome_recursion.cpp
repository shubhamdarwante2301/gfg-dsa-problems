//find string is palindrome or not using recursion
//https://ide.geeksforgeeks.org/0Lyw9U6yZe

#include <iostream>
using namespace std;

bool isPalindrome(string &str, int left, int right)
{
    if(left >= right)
    {
        return true;
    }
    
    return (str[left] == str[right] && isPalindrome(str, left+1, right-1));
}

int main() {
	string str = "abcba";
	int left=0;
	int right = str.length()-1;
	
	bool key = isPalindrome(str, left, right);
	
	if(key == true)
	{
	    cout<<str<<" is palindrome"<<endl;
	}
	else
	{
	    cout<<str<<" is not palindrome"<<endl;
	}
	
	return 0;
}