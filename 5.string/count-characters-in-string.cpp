//count chaacters in string and print it in sorted order

#include<iostream>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    int count[26] = {0};
    for(int i=0; i<str.length(); i++)
    {
        int m = str[i] - 'a';
        count[m]++;
    }
    for(int k=0; k<26; k++)
    {
        if(count[k]>0)
        {
            cout<<(char)(k+'a') <<" "<<count[k]<<endl;
        }
            
    }
    return 0;
}