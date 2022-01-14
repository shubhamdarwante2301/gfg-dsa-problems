//Exchange matrix columns
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

vector<vector<int>> insert(int m, int n)
{
    vector<vector<int>> temp;
    int k=1;
    for(int i=0; i<m; i++)
    {
        vector<int> v;
        for(int j=0; j<n; j++)
        {
            v.push_back(k++);
        }
        temp.push_back(v);
    }
    return temp;
}

void exchangeColumns(vector<vector<int> > &matrix)
    {
        int m = matrix[0].size();
        for(int i=0; i<matrix.size(); i++)
        {
            swap(matrix[i][0], matrix[i][m-1]);
        }
    }
int main() {
	vector<vector<int>> arr1;
    int m=4, n=4;
    arr1 = insert(m, n);
    cout<<"1 matrix"<<endl;
    print(arr1);
    
    cout<<"after exchanging columns"<<endl;
    exchangeColumns(arr1);
    print(arr1);
    
	return 0;
}