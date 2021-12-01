//Equilibrium Point
//Equilibrium Point is a position in a array that is the sum of element before it is equal to the sum of //element after it.

#include<iostream>
using namespace std;

int equilibriumPoint(int arr[], int size)
{
    if(size == 1)
    {
        return 1;
    }
    int res = 0;
    for(int i=2; i<size; i++)
    {
        res += arr[i];
    }
    int before = arr[0], after = res;

    for(int i=1; i<size-1; i++)
    {
        if(before == after)
        {
            return i+1;
        }
        else 
        {
            before += arr[i];
            after -= arr[i+1];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int EquilibriumPoint = equilibriumPoint(arr, size);
    cout<<EquilibriumPoint;
    return 0;
}