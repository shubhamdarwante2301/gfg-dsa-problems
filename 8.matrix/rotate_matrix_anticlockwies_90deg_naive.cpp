//rotate matrix 90 deg anticlockwise 
//naive methode
//O(n) extra space

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
    int temp[n][n];
    
    for(int i=0; i<n; i++)
    {
        int k=0;
        for(int j=n-1; j>=0; j--)
        {
            temp[k++][i] = arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[i][j] = temp[i][j];
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