//check if given string is anagram or not
//anagram means both string has same size and string1 has same character as string2 and vise versa

#include<iostream>
using namespace std;

bool isAnagram(string &str1, string &str2)
{
    if(str1.length() != str2.length())
    {
        return false;
    }
    int count[256] = {0};

    for(int i=0; i<str1.length(); i++)
    {
        int x = str1[i];
        count[x]++;
    }
    for(int j=0; j<str2.length(); j++)
    {
        int k = str2[j];
        count[k]--;
    }
    for(int m=0; m<256; m++)
    {
        if(count[m]>0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1, str2;
    cout<<"enter the string 1"<<endl;
    getline(cin, str1);
    cout<<"enter the string 2"<<endl;
    getline(cin, str2);

    int x = isAnagram(str1, str2);
    if(x==1)
    {
        cout<<"it is anagram";
    }
    else
    {
        cout<<"it is not anagram";
    }
    return 0;
}