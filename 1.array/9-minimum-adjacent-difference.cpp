//Minimum adjacent difference in a circular array

#include<iostream>
using namespace std;

int diff(int arr[], int size)
{
    int a = arr[0] - arr[1];
    int res = abs(a);
    int x,k;

    for(int i=1; i<size-1; i++)
    {
        k = arr[i] - arr[i+1];
        x = abs(k);
        if(x<res)
        {
            res = x;
        }
    }
    k = arr[size-1] - arr[0];
    x = abs(k);
    if(x<res)
    {
        res = x;
    }
    return res;

}

int main()
{
    int arr[] = {8,-8,9,-9,10,-11,12};
    int size = 7;

    cout<<diff(arr, size);

}
