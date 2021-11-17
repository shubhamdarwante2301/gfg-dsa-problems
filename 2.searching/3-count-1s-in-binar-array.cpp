#include<iostream>
using namespace std;

int countOnes(int arr[], int size)
{
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high) / 2;
        if(arr[mid] != arr[mid+1])
        {
            return mid+1;
        }
        else if(arr[mid] == 0)
        {
            high = mid-1;
        }
        else if(arr[mid] == 1)
        {
            low = mid+1;
        }
    }
}

int main()
{
    int arr[] = {1,1,1,1,0,0,0,0};
    int size = 8;
    cout<<countOnes(arr, size);
}