#include<iostream>
using namespace std;

void strongestNeighbour(int arr[], int size)
{
    for(int i=1; i<size; i++)
    {
        if(arr[i]>arr[i-1])
        {
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i-1]<<" ";
        }
    }
}

int main()
{
    int arr[6] = {1,2,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    strongestNeighbour(arr, size);

}