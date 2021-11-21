//lomuto partition 
//in this program we considered last element is always a pivot element

#include<iostream>
using namespace std;

void lomuto(int arr[], int size)
{
    int j=-1;
    int p = size-1;
    for(int i=0; i<size-1; i++)
    {
        if(arr[i] < arr[p])
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j+1], arr[p]);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[] = {6,7,8,9,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    lomuto(arr, size);
    return 0;
}