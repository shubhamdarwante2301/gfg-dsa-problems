//bubble sort
//time complexity O(N^2)

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {20,40,10,30,50};
    int size = 5;
    bool swapped;
    for(int i=0; i<size; i++)
    {
        swapped = false;
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}