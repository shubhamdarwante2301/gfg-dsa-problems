//order dosent matter

#include<iostream>
using namespace std;

void threeWayPartition(int arr[], int size, int a, int b)
{
    int i=0;
    int mid=0;
    int j=size-1;

    while(mid<=j)
    {
        if(arr[mid]<a)
        {
            swap(arr[mid], arr[i]);
            i++;
            mid++;
        }
        else if(arr[mid]>b)
        {
            swap(arr[mid], arr[j]);
            j--;
        }
        else
        {
            mid++;
        }
    }
}

int main()
{
    int arr[] = {6,22,68,5,14,62,55,27,60,45,3,3,7,85};
    int size = sizeof(arr) / sizeof(arr[0]);

    int a = 22;
    int b = 64;

    threeWayPartition(arr, size, a, b);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}