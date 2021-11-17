//searching an element in sorted arry
//if element is found return 1 and if element is not found return -1
//binary search

#include<iostream>
using namespace std;

int searchInSorted(int arr[], int N, int k)
{
    int low = 0;
    int high = N-1;
    int mid;

    while(low<=high)
    {
        mid = (low+high) / 2;
        if(arr[mid] == k)
        {
            return 1;
        }
        else if(arr[mid] < k)
        {
            low = mid+1;
        }
        else if(arr[mid] > k)
        {
            high = mid-1;
        }
    }
return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int N = 6;
    int k = 6;
    cout<<searchInSorted(arr, N, k);
}