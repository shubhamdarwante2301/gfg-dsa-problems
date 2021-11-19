//insertion sort

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {20,10,40,30,50};
    int size = 5;

    for(int i=1; i<size; i++)
    {
        int key = arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int k=0; k<size; k++)
    {
        cout<<arr[k]<<" ";
    }
}