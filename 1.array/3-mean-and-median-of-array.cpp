#include<iostream>
using namespace std;

int mean(int arr[], int size)
{
    int res=0, mean;
    for(int i=0; i<size; i++)
    {
        res=res+arr[i];
    }
    mean = res/size;
    return mean;
}

int median(int arr[], int size)
{
    int median;
    median = (size-1) / 2;
    return arr[median];
}

int main()
{
    int arr[4] = {2,3,4,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<mean(arr, size)<<endl;
    cout<<median(arr, size);
}