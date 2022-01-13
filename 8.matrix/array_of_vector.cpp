//array of vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int m=4, n=4;
	vector<int> arr[m];
	
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        arr[i].push_back(i+j);
	    }
	}
	
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}