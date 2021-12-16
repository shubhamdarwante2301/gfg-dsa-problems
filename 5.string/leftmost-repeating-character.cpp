//leftmost repeating character
//string has both uppercase and lowercase characters

#include<iostream>
using namespace std;

char repeatingChar(string &str)
{
    int m = str.length();
    int count[256] = {0};

    for(int i=0; i<m; i++)
    {
        int k = str[i];
        count[k]++;
    }
    for(int j=0; j<m; j++)
    {
        int z = str[j];
        if(count[z]>1)
        {
            char ch = str[j];
            return ch;
        }
    }
    char ch = '$';
    return ch;

}

int main()
{
    string str = "geeksforgeeks";
    char ch = repeatingChar(str);
    cout<<ch;
    return 0;
}