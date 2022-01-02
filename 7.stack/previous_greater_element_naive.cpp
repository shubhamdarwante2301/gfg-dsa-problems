//previous greater element naive approach
//tie complexity O(n^2)


#include <iostream>
using namespace std;

void previousGreater(int arr[], int size)
{
    cout<<arr[0]<<" = -1"<<endl;
    for(int i=1; i<size; i++)
    {int j;
        for(j=i-1; j>=0; j--)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[i]<<" = "<<arr[j]<<endl;
                break;
            }
        }
        if(j == -1)
        {
            cout<<arr[i]<<" = -1"<<endl;
        }
    }
}

int main() {
	int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	previousGreater(arr, size);
	return 0;
}