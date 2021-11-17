//peak element means the element is not smaller than it's nighboors
//time complexity O(n)

#include<iostream>
using namespace std;

int findPeak(int arr[], int size)
{
    if(arr[0]>arr[1])
    {
        return arr[0];
    }
    if(arr[size-1]>arr[size-2])
    {
        return arr[size-1];
    }
    for(int i=1; i<size-1; i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {10,20,26,25,2,23,90,67};
    int size = 8;
    cout<<findPeak(arr, size);
}