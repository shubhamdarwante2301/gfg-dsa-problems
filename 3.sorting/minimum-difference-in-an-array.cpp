#include<iostream>
#include<algorithm>
using namespace std;

int minDiff(int arr[], int size)
{
    sort(arr, arr+size);
    int res = INT_MAX;
    for(int i=1; i<size; i++)
    {
        res = min(res, abs(arr[i] - arr[i-1]));
    }

    return res;
}

int main()
{
    int arr[] = {10,3,20,12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min_diff = minDiff(arr, size);
    cout<<min_diff;
    return 0;
}