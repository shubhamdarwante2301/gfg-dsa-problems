//boundary traversal of matrix

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> &arr)
{
    int row = arr.size();
    //cout<<row<<endl;
    int col = 0;
    for(int i=0; i<row; i++)
    {
        int k = arr[i].size();
        col = max(col, k);
    }
    
    //cout<<col<<endl;
    
    if(row == 1)
    {
        for(int i=0; i<col; i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    
    else if(col == 1)
    {
        for(int i=0; i<row; i++)
        {
            cout<<arr[i][0]<<endl;
        }
    }
    else
    {
        for(int i=0; i<col; i++)
        {
            cout<<arr[0][i]<<" ";
        }
        for(int i=1; i<row; i++)
        {
            cout<<arr[i][col-1]<<" ";
        }
        for(int i=col-2; i>=0; i--)
        {
            cout<<arr[row-1][i]<<" ";
        }
        for(int i=row-2; i>=1; i--)
        {
            cout<<arr[i][0]<<" ";
        }
    }
    
}

int main() {
	vector<vector<int>> arr;
	
	int m=5, n=5;
	int k=1;
	for(int i=0; i<m; i++)
	{
	    vector<int> v;
	    for(int j=0; j<n; j++)
	    {
	        v.push_back(k++);
	    }
	    arr.push_back(v);
	}
	
	cout<<"normal matrix"<<endl;
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	cout<<"boundary of matrix"<<endl;
	print(arr);
	
	return 0;
}