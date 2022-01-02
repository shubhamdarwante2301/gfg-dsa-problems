//next greater element naive
//time complexity O(N^2)

#include <iostream>
using namespace std;

void nextGreater(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        int j;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                cout<<arr[i]<<" = "<<arr[j]<<endl;
                break;
            }
        }
        if(j==size)
        {
            cout<<arr[i]<<" = -1"<<endl;
        }
        
    }
}

int main() {
	int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
	int size= sizeof(arr) / sizeof(arr[0]);
	
	nextGreater(arr, size);
	return 0;
}