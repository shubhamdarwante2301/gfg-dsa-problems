//check string is subsequence or not

#include<iostream>
using namespace std;

bool isSubsequence(string &str1, string &str2)
{
    int i=0;
    int j=0;

    while(i<str1.length() && j<str2.length())
    {
        if(str1[i] == str2[j])
        {
            if(j == str2.length()-1)
            {
                return true;
            }
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    string str1, str2;
    cout<<"enter string 1 "<<endl;
    getline(cin, str1);
    cout<<"enter string 2 "<<endl;
    getline(cin, str2);

    int x = isSubsequence(str1, str2);
    if(x == 0)
    {
        cout<<str2<<" is not subsequence";
    }
    else
    {
        cout<<str2<<" is subsequence";
    }
}