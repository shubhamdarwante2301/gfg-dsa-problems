//count the friquency of an element in a sorted array

#include<iostream>
using namespace std;

void countFreq(int arr[], int size)
{
    int i=1;
    int freq = 1;
    while(i<size)
    {
        while(i<size && arr[i]==arr[i-1])
        {
            i++;
            freq++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(size==1 || arr[size-1]!=arr[size-2])
    {
        cout<<arr[size-1]<<" 1";
    }
}

int main()
{
    int arr[] = {10,20,20,30,30,30,40};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFreq(arr, size);
    return 0;
}