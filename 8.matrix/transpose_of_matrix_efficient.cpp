//transpose of matrix efficient
//matrix should be of size n*n

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(vector<vector<int>> arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr[i].size(); j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    print(arr);
}

int main() {
	vector<vector<int>> arr;
	int n=3;
	
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
	
	cout<<"before transpose of matrix"<<endl;
	print(arr);
	
	cout<<"after transpose of matrix"<<endl;
	transpose(arr);
	
	return 0;
}