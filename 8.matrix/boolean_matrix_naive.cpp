//Boolean Matrix
//Boolean Matrix means if cell of matrix[i][j] is set to 1 then make its corrosponding whole row and //column to 1 

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
    for(int i=0; i<m; i++)
    {
        vector<int> v;
        for(int j=0; j<n; j++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        temp.push_back(v);
    }
    return temp;
}

void booleanMatrix(vector<vector<int>> &arr, int m, int n)
{
    int row[m] = {0};
    int col[n] = {0};
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                arr[i][j]=1;
            }
        }
    }
    
}

int main() {
	vector<vector<int>> arr;
    int m=4, n=4;
    cout<<"enter 4*4 boolean matrix"<<endl;
    arr = insert(m, n);
    cout<<"1 matrix"<<endl;
    print(arr);
    
    cout<<"boolean matrix"<<endl;
    booleanMatrix(arr, m, n);
    print(arr);
    
	return 0;
}