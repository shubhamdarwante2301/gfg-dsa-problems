//spiral traversal of matrix

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

void spiralMatrix(vector<vector<int>> &arr, int m, int n)
{
    if(m==1)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    else if(n==1)
    {
        for(int i=0; i<m; i++)
        {
            cout<<arr[i][0]<<endl;
        }
    }
    else
    {
        int top=0, bottom=m-1, left=0, right=n-1;
        while(top<=bottom && left<=right)
        {
            for(int i=left; i<=right; i++)
            {
                cout<<arr[top][i]<<" ";
            }
            top++;
            for(int i=top; i<=bottom; i++)
            {
                cout<<arr[i][right]<<" ";
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right; i>=left; i--)
                {
                    cout<<arr[bottom][i]<<" ";
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom; i>=top; i--)
                {
                    cout<<arr[i][left]<<" ";
                }
                left++;
            }
        }
    }
}

int main() {
	vector<vector<int>> arr;
    int m=4, n=4;
    arr = insert(m, n);
    cout<<"1 matrix"<<endl;
    print(arr);
    
    cout<<"spiral matrix"<<endl;
    spiralMatrix(arr, m, n);
    
	return 0;
}