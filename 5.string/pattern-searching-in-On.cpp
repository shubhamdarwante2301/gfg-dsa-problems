//pattern searching in O(N) time complexity
//naive approach
//O(N) time complexity when only pattern has distinct element 

#include<iostream>
using namespace std;

void findPattern(string &str, string &pat)
{
    int m = str.length();
    int n = pat.length();

    for(int i=0; i<=m-n; )
    {
        int j;
        for(j=0; j<n; j++)
        {
            if(str[i+j] != pat[j])
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<i<<" ";
        }
        if(j==0)
        {
            i++;
        }
        else
        {
            i=i+j;
        }
    }
}

int main()
{
    string str = "geeksforgeeks";
    string pat = "gee";

    findPattern(str, pat);

    return 0;
}