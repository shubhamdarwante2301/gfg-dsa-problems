//given an sorted array with distinct integer
//rearrange like an order arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >=arr//[4] <= arr[5]

#include<iostream>
using namespace std;

void waveArr(int arr[], int size)
{
    int i=0;
    while(i<size)
    {
        swap(arr[i], arr[i+1]);
        if(i+2 == size-1)
        {
            i=size;
        }
        else
        {
            i=i+2;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    waveArr(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}