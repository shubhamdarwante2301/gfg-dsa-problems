//union of two sorted array
//efficient solution

#include<iostream>
using namespace std;

void unionOf(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i] == a[i-1])
        {
            i++;
            continue;
        }
        else if(j>0 && b[j] == b[j-1])
        {
            j++;
            continue;
        }
        else if(a[i] < b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i] > b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<m)
    {
        if(i == 0 || a[i] != a[i-1])
        {
            cout<<a[i]<<" ";
        }
        i++;
    }

    while(j<n)
    {
        if(j == 0 || b[j] != b[j-1])
        {
        cout<<b[j]<<" ";
        }
        j++;
    }

}

int main()
{
    int a[] = {2,10,20,20,30,50,50,50,60};
    int b[] = {3,20,40,40,45};

    int m=sizeof(a) / sizeof(a[0]);
    int n=sizeof(b) / sizeof(b[0]);

    unionOf(a, b, m, n);
    return 0;
}