//quick sort using hoare partitioning method

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int p = arr[low];
    int i=low-1;
    int j=high+1;

    while(true)
    {
        do{
            i++;
        }while(arr[i]<p);

        do{
            j--;
        }while(arr[j]>p);

        if(i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p+1, high);
    }
}

int main()
{
    int arr[] = {5,9,1,8,2,7,3,6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low=0, high = size-1;

    quickSort(arr, low, high);
    //int p = partition(arr, low, high);
    //cout<<p<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}