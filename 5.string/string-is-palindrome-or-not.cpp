
//check if string is palindrome or not
//it is a O(n) algorithm

#include<iostream>
using namespace std;

bool isPalindrome(string &str)
{
    int low = 0;
    int high = str.length()-1;
    while(low<=high)
    {
        if(str[low]!=str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    string str;
    cout<<"enter the string"<<endl;
    getline(cin, str);

    int x = isPalindrome(str);
    if(x==0)
    {
        cout<<str<<" is not palindrome";
    }
    else
    {
        cout<<str<<" is palindrome";
    }
    return 0;
}