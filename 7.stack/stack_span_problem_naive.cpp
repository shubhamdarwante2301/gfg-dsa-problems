//stack_span_problem naive
//time complexity O(n^2)
//space complexity O(1)

#include <iostream>
using namespace std;

void checkSpan(int arr[], int size)
{
    cout<<arr[0]<<" = 1"<<endl;
    for(int i=1; i<size; i++)
    {
        int count = 1;
        int j=i-1;
        while(j > -1 && arr[j]<=arr[i])
        {
            count++;
            j--;
        }
        cout<<arr[i]<<" = "<<count<<endl;
    }
}

int main() {
	int arr[] = {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout<<size<<endl;
	
	checkSpan(arr, size);
	return 0;
}