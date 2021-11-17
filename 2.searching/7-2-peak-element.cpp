//peak element means the element is not smaller than it's nighboors
//time complexity O(logN)

#include<iostream>
using namespace std;

int findPeak(int arr[], int size)
{
    int low = 0;
    int high = size-1;
    int mid;
    if(arr[0]>arr[1])
    {
        return arr[0];
    }
    if(arr[size-1]>arr[size-2])
    {
        return arr[size-1];
    }
    while(low<=high)
    {
        mid = (low+high) / 2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid-1]>arr[mid])
        {
            high = mid-1;
        }
        else if(arr[mid]<arr[mid+1])
        {
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {10,20,26,25,2,23,90,67};
    int size = 8;
    cout<<findPeak(arr, size);
    return 0;
}