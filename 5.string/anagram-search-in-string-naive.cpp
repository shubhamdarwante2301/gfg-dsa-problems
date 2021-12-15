//Given a text and a pattern, the task is to find if there is anagram of pattern present in text.
//this is naive approach

#include<iostream>
using namespace std;

bool isAnagram(string &str, string &pat, int i)
{
    int count[256] = {0};

    int n = pat.length();
    for(int j=0; j<n; j++)
    {
        count[str[j+i]]++;
        count[pat[j]]--;
    }
    for(int k=0; k<256; k++)
    {
        if(count[k]!=0)
        {
            return false;
        }
    }
    return true;
}

bool isPresent(string &str, string &pat)
{
    int m = str.length();
    int n = pat.length();
    for(int i=0; i<=m-n; i++)
    {
        if(isAnagram(str, pat, i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str = "geeksforgeeks";
    string pat = "fog";

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