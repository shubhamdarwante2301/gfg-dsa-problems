//leaders in an array

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> leaders(int arr[], int size)
{
    vector<int> v;
    int max = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            v.push_back(arr[i]);
            max = arr[i];
        }
    }
    reverse(v.begin(), v.end());

    return v;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> v = leaders(arr, size);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}