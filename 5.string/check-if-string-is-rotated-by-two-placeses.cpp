//check can string1 is obtianed by rotating string2 in two places

#include<iostream>
using namespace std;

bool isRotating(string &str1, string &str2)
{
    int m = str1.length();
    int n = str2.length();

    if(m != n)
    {
        return false;
    }

    string temp1 = str1.substr(2, m);
    temp1 = temp1.append(str1, 0, 2);

    string temp2 = str1.substr(m-2, m);
    temp2 = temp2.append(str1, 0, m-2);

    if(temp1 == str2 || temp2 == str2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str1 = "amazon";
    string str2 = "azonam";

    cout<<isRotating(str1, str2);

    return 0;
}