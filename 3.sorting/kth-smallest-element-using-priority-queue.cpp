//kth smallest element using priority queue

#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[], int size, int k)
{
    priority_queue<int> pq;

    for(int i=0; i<size; i++)
    {
        pq.push(arr[i]);
    }
    int temp = size - k;

    for(int j=0; j<temp; j++)
    {
        pq.pop();
    }
    return pq.top();
}

int main()
{
    int arr[] = {1,9,2,8,3,7,4,6,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"enter the number of smallest element to be find"<<endl;
    cin>>k;

    int elem = kthSmallest(arr, size, k);
    cout<<elem;
}