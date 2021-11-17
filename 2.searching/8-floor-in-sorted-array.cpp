//Given a sorted array and a value x, the floor of x is the largest element in array smaller than or //equal to x. Write efficient functions to find floor of x.
//floor means largest smaller element than given element

#include<iostream>
using namespace std;

int findFloor(int arr[], int size, int x)
{
    int low=0;
    int high=size-1;
    int mid;
    if(arr[size-1]<=x)
    {
        return arr[size-1];
    }
    while(low<=high)
    {
        mid = (low+high) / 2;
        if(arr[mid]<=x && arr[mid+1]>=x)
        {
            return arr[mid];
        }
        else if(arr[mid+1]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int size = 7;
    int x = 15;
    cout<<findFloor(arr, size, x);
    return 0;
}