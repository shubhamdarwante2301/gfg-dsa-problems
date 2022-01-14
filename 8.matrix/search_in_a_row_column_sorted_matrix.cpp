//Search in a row-column sorted Matrix
//https://ide.geeksforgeeks.org/qMCTicPqZo
//input for this program
//4 4
//10 20 30 40 15 25 35 45 27 29 37 48 32 33 39 50

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

void findX(vector<vector<int>> &arr, int x)
{
    int m = arr.size();
    int n = arr[0].size();
    
    int i=0, j=n-1;
    while(i<m && j>=0)
    {
        if(arr[i][j] == x)
        {
            cout<<x<<" is found at position arr["<<i<<"]["<<j<<"]"<<endl;
            return;
        }
        else if(arr[i][j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"x is not found"<<endl;
}

int main() {
	vector<vector<int>> arr;
    int m, n;
    cin>>m>>n;
    arr = insert(m, n);
    cout<<"matrix"<<endl;
    print(arr);
    
    int x = 29;
    findX(arr, x);
	return 0;
}