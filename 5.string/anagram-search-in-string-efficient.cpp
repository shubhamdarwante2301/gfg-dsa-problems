//Given a text and a pattern, the task is to find if there is anagram of pattern present in text
//it is efficient approach O(n*char) time complexity

#include<iostream>
using namespace std;

bool isSame(int strarr[], int patarr[])
{
    for(int i=0; i<256; i++)
    {
        if(strarr[i] != patarr[i])
        {
            return false;
        }
    }
    return true;
}

bool isPresent(string &str, string &pat)
{
    int m=pat.length();

    int strarr[256]={0};
    int patarr[256]={0};

    for(int i=0; i<m; i++)
    {
        strarr[str[i]]++;
        patarr[pat[i]]++;
    }
    for(int j=m; j<str.length(); j++)
    {
        if(isSame(strarr, patarr))
        {
            return true;
        }
        strarr[str[j-pat.length()]]--;
        strarr[str[j+1]]++;
    }
    return false;
}

int main()
{
    string str = "geeksforgeeks";
    string pat = "forgk";

    if(isPresent(str, pat))
    {
        cout<<"anagram is found";
    }
    else
    {
        cout<<"anagram is not found";
    }

    return 0;
}