//9 minimum number in sorted rotated array
//time complexity O(logN)

#include<iostream>
using namespace std;

int findMin(int arr[], int low, int high)
{
    int mid;
    if(arr[low]<arr[high])
    {
        return arr[low];
    }
    while(low<=high)
    {
        mid = (low+high) / 2;
        if(arr[mid]<arr[mid-1])
        {
            return arr[mid];
        }
        else if(arr[mid]<arr[high])
        {
            high = mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int low=0;
    int high=4;
    cout<<findMin(arr, low, high);
    return 0;
}