//Sum of upper and lower triangles
#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> arr)
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

void sumOfTriangles(vector<vector<int>> arr)
{
    int upper = 0;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i; j<arr.size(); j++)
        {
            upper += arr[i][j];
        }
    }
    cout<<"upper triangles = "<<upper<<endl;
    
    int lower = 0;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<=i; j++)
        {
            lower += arr[i][j];
        }
    }
    cout<<"lower triangles = "<<lower<<endl;
}

int main() {
	vector<vector<int>> arr;
	int n = 2;
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
	
	print(arr);
	
	sumOfTriangles(arr);
	
	return 0;
}