//next greater element efficient apprach
//time complexity O(n)
//this program print output in reverse order

#include <iostream>
#include <stack>
using namespace std;

void nextGreater(int arr[], int size)
{
    stack<int> s;
    s.push(arr[size-1]);
    cout<<arr[size-1]<<" = -1"<<endl;
    
    for(int i=size-2; i>=0; i--)
    {
        while(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        int res = s.empty() ? -1 : s.top();
        cout<<arr[i]<<" = "<<s.top()<<endl;
        s.push(arr[i]);
    }
}

int main() {
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
	int size= sizeof(arr) / sizeof(arr[0]);
	
	nextGreater(arr, size);
	return 0;
}