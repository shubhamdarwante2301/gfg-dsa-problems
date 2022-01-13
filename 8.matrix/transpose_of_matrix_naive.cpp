//transpose of matrix
//matrix should be n*n
//space complexity O(n)

#include <iostream>
using namespace std;

int main() {
    int n=4;
	int arr[n][n];
	
	int k=1;
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        arr[i][j] = k++;
	    }
	}
	cout<<"normal matrix"<<endl;
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	int temparr[n][n];
	cout<<"transpose matrix"<<endl;
	
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        temparr[j][i] = arr[i][j];
	    }
	}
	
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cout<<temparr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}