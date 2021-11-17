#include<iostream>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while(low<high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
        
    }
}

void rotate(int arr[], int n, int k)
{
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n=5;
    int k;
    cout<<"enter number to rotate array by n times"<<endl;
    cin>>k;

    rotate(arr, n, k);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}