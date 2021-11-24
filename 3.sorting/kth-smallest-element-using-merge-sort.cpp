//kth smallest element using merge sort technique and lomuto patitioning method

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int p = arr[high];
    int i = -1;
    for(int j=0; j<=high; j++)
    {
        if(arr[j] <= p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    return i;
}

int qSort(int arr[], int size, int k)
{
    int low = 0;
    int high = size-1;
    while(low<=high)
    {
        int p = partition(arr, low, high);
        if(p == (k-1))
        {
            return arr[p];
        }
        else if(p > (k-1))
        {
            high = p-1;
        }
        else {
            low = p+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {90,10,80,20,70,30,60,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k=9;

    int elem = qSort(arr, size, k);
    cout<<k<<"th smallest element is "<<elem<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}