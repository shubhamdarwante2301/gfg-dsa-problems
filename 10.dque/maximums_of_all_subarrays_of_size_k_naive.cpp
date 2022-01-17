//Maximums of all subarrays of size k naive
//k must be less than n

#include <iostream>
using namespace std;

void findMax(int arr[], int n, int k)
{

    for(int i=0; i<n-k+1; i++)
    {
        int maxVal = arr[i];
        for(int j=i; j<k+i; j++)
        {
            maxVal = max(maxVal, arr[j]);
        }
        cout<<maxVal<<" ";
    }
}

int main()
{
    int arr[] = {10, 8, 5, 12, 15, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    findMax(arr, size, k);

    return 0;
}