#include<iostream>
#include<vector>
using namespace std;

vector<int> maxAndSecondMax(int arr[], int size)
{
    vector<int> ans;
    int max=0, max2=-1;
    for(int i=0; i<size; i++)
    {
        if(max<arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        if(arr[i]<max && arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    ans.insert(ans.begin(), max);
    ans.insert(ans.begin()+1, max2);

    return ans;
}

int main()
{
    int arr[3] = {2,1,2};
    int size = 3;

    vector<int> ans = maxAndSecondMax(arr, size);

    cout<<ans[0]<<" "<<ans[1];
}