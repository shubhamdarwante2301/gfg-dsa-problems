//find the first occurance of element from left side

#include<iostream>
using namespace std;

int leftIndex(int arr[], int N, int X)
{
    int low = 0;
    int high = N-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high) / 2;
        if(arr[mid]==X && arr[mid-1]!=X)
        {
            return mid;
        }
        else if(arr[mid-1]==X)
        {
            high=mid-1;
        }
        else if(arr[mid]<X)
        {
            low = mid+1;
        }
        else if(X<arr[mid])
        {
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1,1,2,2,3,4,5,5,6,7};
    int N = 10;
    int X = 1;
    cout<<leftIndex(arr, N, X);
}