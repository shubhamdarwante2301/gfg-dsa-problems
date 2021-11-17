#include<iostream>
using namespace std;

void insertAtIndex(int arr[], int sizeOfArray, int element, int index)
{
    for(int i=sizeOfArray - 2; i>=index; i--)
    {
        arr[i+1] = arr[i];
    } 
    arr[index] = element;
}

int main()
{
    int arr[6] = {1,2,3,4,5};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    
    int element, index;
    cout<<"enter an element to be insert in the array"<<endl;
    cin>>element;
    cout<<"enter the index where element need to be inserted"<<endl;
    cin>>index;
    insertAtIndex(arr, sizeOfArray, element, index);

    for(int i=0; i<sizeOfArray; i++)
    {
        cout<<arr[i]<<" ";
    }
}