//previous greater element efficient
//time complexity O(n)

#include <iostream>
#include <stack>
using namespace std;

void previousGreateer(int arr[], int size)
{
    stack<int> s;
    s.push(arr[0]);
    cout<<arr[0]<<" = -1"<<endl;
    
    for(int i=1; i<size; i++)
    {
        while(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            cout<<arr[i]<<" = -1"<<endl;
        }
        else
        {
            cout<<arr[i]<<" = "<<s.top()<<endl;
        }
        s.push(arr[i]);
    }
}

int main() {
	int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	previousGreateer(arr, size);
	return 0;
}