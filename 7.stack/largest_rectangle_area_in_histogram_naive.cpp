//largest_rectangle_area_in_histogram_naive
//time complexity O(n^2)

#include <iostream>
using namespace std;

void largestRectangle(int arr[], int size)
{
    int res = 0;
    
    for(int i=1; i<size; i++)
    {
        int curr = arr[i];
        for(int j=i-1; j>=0 && arr[j]>=arr[i]; j--)
        {
            curr += arr[i];
        }
        for(int k=i+1; k<size && arr[i]<=arr[k]; k++)
        {
            curr += arr[i];
        }
        
        res = max(res, curr);
    }
    cout<<res;
}

int main() {
	int arr[] = {6, 2, 5, 4, 1, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	largestRectangle(arr, size);
	return 0;
}