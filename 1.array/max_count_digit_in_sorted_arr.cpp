//count digit in array 
//array must be sorted
//time complexity O(n)

#include <iostream>
using namespace std;

int getCount(int arr[], int size)
{
    int count = 0;
    int maxCount = 0;
    
    for(int i=0; i<size; i++)
    {
        if(arr[i] != arr[i+1] || i == size-1)
        {
            count++;
            maxCount = max(count, maxCount);
            count = 0;
        }
        else
        {
            count++;
        }
    }
    
    return maxCount;
}

int main() {
	int arr[] = {1,2,3,3,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int res = getCount(arr, size);
	cout<<res;
	return 0;
}