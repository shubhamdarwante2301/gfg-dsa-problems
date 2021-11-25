#include<iostream>
#include<algorithm>
using namespace std;

int maxGuests(int arr[], int dep[], int size)
{
    sort(arr, arr+size);
    sort(dep, dep+size);

    int i=1, j=0, res = 1, count=1;
    while(i<size && j<size)
    {
        if(arr[i] <= dep[j])
        {
            i++;
            count++;
        }
        else if(arr[i] > dep[j])
        {
            j++;
            count--;
        }
        res = max(res, count);
    }
    return res;

}

int main()
{
    int arr[] = {900, 600, 700};
    int dep[] = {1000, 800, 730};

    int size = sizeof(arr) / sizeof(arr[0]);

    int guests = maxGuests(arr, dep, size);
    cout<<guests;
    return 0;
}