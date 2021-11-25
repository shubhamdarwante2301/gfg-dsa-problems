#include<iostream>
using namespace std;

void cycleSort(int arr[], int size)
{
    for(int cs=0; cs<size-1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1; i<size; i++)
        {
            if(item>arr[i])
            {
                pos++;
            }
        }
        swap(item, arr[pos]);
        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1; i<size; i++)
            {
                if(item>arr[i])
                {
                    pos++;
                }
            }
            swap(item, arr[pos]);
        }
    }
}

int main()
{
    int arr[] = {10,100,50,70,60,500,200,11,16,250,301,249,299,111,221,99,88,449,994};
    int size = sizeof(arr) / sizeof(arr[0]);

    cycleSort(arr, size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}