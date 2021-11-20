//intersection of two sorted arrays
//print duplicate element only

#include<iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i] == a[i-1])
        {
            i++;
            continue;
        }
        if(a[i] < b[j])
        {
            i++;
        }
        if(a[i] > b[j])
        {
            j++;
        }
        if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {1,20,20,40,60};
    int b[] = {1,20,20,20,40};

    int m=5, n=5;
    intersection(a, b, m, n);
}