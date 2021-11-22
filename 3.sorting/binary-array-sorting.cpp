//binary array sorting using hoare partitioning

#include<iostream>
using namespace std;

void binSort(int arr[], int size)
{
    int low=-1;
    int high=size;

    while(true)
    {
        do{
            low++;
        }while(arr[low]==0);

        do{
            high--;
        }while(arr[high]==1);

        if(low>high)
        {
            break;
        }
        swap(arr[low], arr[high]);
    }
}

int main()
{
    int arr[] = {0,1,0,1,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    binSort(arr, size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}