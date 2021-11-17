#include<iostream>
using namespace std;

int majorityWins(int arr[], int n, int x, int y)
{
    int countX=0, countY=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            countX++;
        }
        if(arr[i]==y)
        {
            countY++;
        }
    }
    if(countX>countY)
    {
        return x;
    }
    else if(countX<countY)
    {
        return y;
    }
    if(countX==countY)
    {
        if(x>y)
        {
            return y;
        }
        else
        {
            return x;
        }
    }
    return EXIT_SUCCESS;
}

int main()
{
    int arr[11] = {1,1,2,2,3,3,4,4,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x=4, y=5;
    cout<<majorityWins(arr, n, x, y);
}