// check the string1 is found or not in string2 while rotating string2

#include<iostream>
using namespace std;

bool findString(string &str, string &str1)
{
    int m=str.length();
    int n=str1.length();

    if(m!=n)
    {
        return false;
    }

    str = str + str;

    return str.find(str1)!=string::npos;
}

int main()
{
    string str = "abcde";
    string str1 = "cdabe";

    cout<<findString(str, str1);
    return 0;
}