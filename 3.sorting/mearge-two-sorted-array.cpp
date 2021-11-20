//mearge two sorted array

#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,3,5,7,9};
    int b[] = {2,4,6,8};

    int m = 5, n = 4;

    int i=0, j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
}