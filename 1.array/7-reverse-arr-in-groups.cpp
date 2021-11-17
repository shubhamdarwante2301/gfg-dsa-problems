#include<iostream>
using namespace std;

void reverse(int arr[], int size, int k)
{
    int low=0, high=k-1;
    int i=0;
    while(i<size)
    {
        while(low<high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
        i=i+k;
        low=i;
        if((size-1)<(i+(k-1)))
        {
            high = size-1;
        }
        else{
            high=i+(k-1);
        }
    }

    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
}
    

    
    
    

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"enter how much element to groups"<<endl;
    cin>>k;
    reverse(arr, size, k);

}