//remove duplicates from sorted array

#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int size)
{
    int i=0;
    for(int j=1; j<size; j++)
    {
        if(arr[j] != arr[i])
        {
            swap(arr[i+1], arr[j]);
            i++;
        }
    }
    return i+1;
}

int main()
{
    int arr[] = {10,20,20,30,30,30,40,40,40,40,50,50,50,50,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, size);
    for(int i=0; i<newSize; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}