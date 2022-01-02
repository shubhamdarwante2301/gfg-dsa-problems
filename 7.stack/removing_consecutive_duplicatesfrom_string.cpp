//removing consecutive duplicaes from string
//time complexity O(n)
//space complexity O(n)

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeDuplicates(string s)
{
    stack<char> ch;
    int size = s.length();
    ch.push(s[size - 1]);
    for (int i = size - 2; i >= 0; i--)
    {
        if (ch.top() != s[i])
        {
            ch.push(s[i]);
        }
    }
    string str;
    while (!ch.empty())
    {
        str += ch.top();
        ch.pop();
    }
    return str;
}

int main()
{
    string str = "aaaaabbbbcccddd";
    string res = removeDuplicates(str);
    cout << res << endl;

    return 0;
}