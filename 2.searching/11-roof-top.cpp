//time complexity O(N)

#include<iostream>
using namespace std;

int maxStep(int arr[], int n)
{
    int maxCount = 0;
    int count = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
    return max(maxCount, count);
}

int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    cout<<maxStep(arr, n);
}