//rotate matrix anticlockwise 90deg
//time complexity O(n^2)
//space complexity O(1)

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotate(vector<vector<int>> &arr)
{
    int n = arr.size();
    //first transpose the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(arr[j][i], arr[i][j]);
        }
    }
    
    //reverse rows of transpose matrix
    for(int i=0; i<n; i++)
    {
        int low=0, high=n-1;
        while(low<high)
        {
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
    print(arr);
}

int main() {
	int n=3;
	
	vector<vector<int>> arr;
	
	int k=1;
	for(int i=0; i<n; i++)
	{
	    vector<int> v;
	    for(int j=0; j<n; j++)
	    {
	        v.push_back(k++);
	    }
	    arr.push_back(v);
	}
	cout<<"before rotate"<<endl;
	print(arr);
	
	cout<<"after rotate of 90deg"<<endl;
	rotate(arr);
	return 0;
}