//stack span problem efficient
//time complexity O(n)
//space complexity O(n)

#include <iostream>
#include <stack>
using namespace std;

void checkSpan(int arr[], int size)
{
    stack<int> s;
    cout<<arr[0]<<" = 1"<<endl;
    s.push(0);
    
    for(int i=1; i<size; i++)
    {
        int count = 1;
        while(!s.empty() && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        count = s.empty() ? i+1 : i - s.top() ; 
        cout<<arr[i]<<" = "<<count<<endl;
        s.push(i);
    }
}

int main() {
	int arr[] = {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	checkSpan(arr, size);
	return 0;
}