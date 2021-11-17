#include<iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray, int element)
{
    arr[sizeOfArray-1]=element;
}

int main()
{
    int arr[6] = {1,2,3,4,5};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    int element;
    cout<<"enter an element to insert at the end of the array"<<endl;
    cin>>element;
    insertAtEnd(arr, sizeOfArray, element);

    for(int i=0; i<sizeOfArray; i++)
    {
        cout<<arr[i]<<" ";
    }
}