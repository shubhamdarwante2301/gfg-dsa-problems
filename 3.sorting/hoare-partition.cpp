//hoare partition algorithm

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int p = arr[low];
    int i=low-1;
    int j=high+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i] <= p);

        do{
            j--;
        }while(arr[j] > p);
        if(i > j)
        {
            swap(arr[low], arr[j]);
            return j;
        }
        swap(arr[i], arr[j]);
    }
    
}

int main()
{
    int arr[] = {5,1,9,2,8,3,7,4,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low=0;
    int high=size-1;
    int loc = partition(arr, low, high);
    for(int i=0; i<=high; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<loc;
    return 0;
}