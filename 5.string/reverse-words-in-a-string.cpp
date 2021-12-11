#include<iostream>
using namespace std;

void reverseChar(string &str, int start, int end)
{
    while(start<=end)
    {
        char ch = str[start];
        str[start] = str[end];
        str[end] = ch;
        start++;
        end--;
    }
}

void reverseWords(string &str, int len)
{
    int start = 0;
    for(int end=0; end<=len; end++)
    {
        if(str[end]==' ' || end == len)
        {
            reverseChar(str, start, end-1);
            start = end+1;
        }
    }
    reverseChar(str, 0, len-1);
}

int main()
{
    string str = "my name is cpp";

    int len = str.length();

    reverseWords(str, len);

    for(int i=0; i<len; i++)
    {
        cout<<str[i];
    }
    return 0;
}