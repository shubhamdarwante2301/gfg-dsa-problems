//find the subarray with given sum
//time complexity O(N)

#include<iostream>
#include<vector>
using namespace std;

vector<int> findSubarray(int arr[], int size, long long sum)
{
    long long curr_sum=0;
    int k=0;
    vector<int> v1;
    for(int i=0; i<=size; i++)
    {
        while(curr_sum > sum && k < i-1)
        {
            curr_sum = curr_sum - arr[k];
            k++;
        }
        if(curr_sum == sum)
        {
            v1.push_back(k+1);
            v1.push_back(i);
            return v1;
            break;
        }
        if(i<size)
        {
            curr_sum = curr_sum + arr[i];
        }

    }
    v1.push_back(-1);
    return v1;
}

int main()
{
    int arr[] = {135,101,170,125,79,159,163,65,106,146,82,28,162,92,196,143,28,37,192,5,103,154,93,183, 22,117,119,96,48,127,172,139,70,113,68,100,36,95,104,12,123,134};
    long long sum = 468;
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    v = findSubarray(arr, size, sum);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}