//rearrange an array with O(1) extra space

#include<iostream>
using namespace std;

void rearrange(int arr[], int size)
{
    int current, previous;
    for(int i=0; i<size; i++)
    {
        current = arr[i];
        if(current<i)
        {
            previous = arr[current] % size;
        }
        else
        {
            previous = arr[current];
        }
        arr[i] = arr[i] + previous * size;
    }
    for(int k=0; k<size; k++)
    {
        arr[k] = arr[k] / size;
    }
}

int main()
{
    int arr[] = {3,2,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}