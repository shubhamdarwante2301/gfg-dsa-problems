//hoare partition algorithm

#include<iostream>
using namespace std;

void segragate012(int arr[], int size)
{
    int i=0;
    int mid=0;
    int j=size-1;
    while(mid<=j)
    {
        if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 0)
        {
            swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
        else
        {
            swap(arr[mid], arr[j]);
            j--;
        }
        
    }
}

int main()
{
    int arr[] = {0,1,2,0,1,2,0,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    segragate012(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}