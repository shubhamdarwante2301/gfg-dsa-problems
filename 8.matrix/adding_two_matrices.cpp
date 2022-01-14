//adding two matrix;
//dimension of both matrix must be same to add

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> A)
{
    for(int i=0; i<A.size(); i++)
    {
        for(int j=0; j<A[i].size(); j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>> add(vector<vector<int>> A, vector<vector<int>> B)
{
    vector<vector<int>> temp;
    
    int n1 = A.size();
    int m1 = A[0].size();
    
    int n2 = B.size();
    int m2 = B[0].size();
    
    if(n1 != n2 || m1 != m2)
    {
        return temp;
    }
    
    for(int i=0; i<A.size(); i++)
    {
        vector<int> v;
        for(int j=0; j<A[i].size(); j++)
        {
            v.push_back(A[i][j] + B[i][j]);
        }
        temp.push_back(v);
    }
    return temp;
}

int main() {
	vector<vector<int>> A;
	
	int k=1;
	for(int i=0; i<2; i++)
	{
	    vector<int> v;
	    for(int j=0; j<3; j++)
	    {
	        v.push_back(k++);
	    }
	    A.push_back(v);
	}
	
	cout<<"1 matrix"<<endl;
	print(A);
	
	vector<vector<int>> B;
	
	k=1;
	for(int i=0; i<2; i++)
	{
	    vector<int> v;
	    for(int j=0; j<3; j++)
	    {
	        v.push_back(k++);
	    }
	    B.push_back(v);
	}
	
	cout<<"2 matrix"<<endl;
	print(B);
	
	cout<<"addition of matrix 1 & 2"<<endl;
	vector<vector<int>> ans = add(A, B);
	print(ans);
	return 0;
}