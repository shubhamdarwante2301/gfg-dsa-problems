//merge function of merge sort
//using O(m+n) auxiliary space

#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid;
    int n2 = high-mid;
    int temp1[n1];
    int temp2[n2];

    for(int i=low; i<n1; i++)
    {
        temp1[i] = arr[i];
        //cout<<temp1[i]<<" ";
    }
    cout<<endl;
    for(int j=0; j<n2; j++)
    {
        temp2[j] = arr[mid+1+j];
        //cout<<temp2[j]<<" ";
    }

    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k] = temp1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = temp2[j];
        k++;
        j++;
    }

    for(int i=0; i<high; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10,15,20,40,8,11,55,60};
    int low=0, mid=3, high=7;

    merge(arr, low, mid, high);
    return 0;
}