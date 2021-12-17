//count the number of substring which start with 1 and end with 1 in a given binary string

#include<iostream>
using namespace std;

int countSubstring(string &str)
{
    int m=0; 
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='1')
        {
            m++;
        }
    }
    return m*(m-1)/2;
}

int main()
{
    string str = "1111";
    int res = countSubstring(str);
    cout<<res;
    return 0;
}