//move all zeros to end of array

#include<iostream>
using namespace std;

void moveZerosToEnd(int arr[], int size)
{
    int i=0;
    for(int j=0; j<size; j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main()
{
    int arr[] = {1,0,2,0,3,0,4,0,5,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}