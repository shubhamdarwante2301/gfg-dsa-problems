#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {7,3,2,4,9,12,56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int m=3;
    sort(arr, arr+size);
    int res = arr[m-1] - arr[0];

    for(int i=1; (i+m-1)<size; i++)
    {
        res = min(res, arr[i+m-1] - arr[i]);
    }
    cout<<res;
}