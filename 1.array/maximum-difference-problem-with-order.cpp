//maximum difference problem with order

#include<iostream>
using namespace std;

int maxDiff(int arr[], int size)
{
    int res = arr[1]-arr[0];
    int minValue = arr[0];
    for(int j=1; j<size; j++)
    {
        res = max(res, arr[j]-minValue);
        minValue = min(arr[j], minValue);
    }
    return res;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int res = maxDiff(arr, size);
    cout<<res;
    return 0;
}