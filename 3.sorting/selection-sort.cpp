//selection sort
//it is unstable algorithm
//time complexity thita(N^2)

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {20,40,10,30,50};
    int N = 5;
    for(int i=0; i<N; i++)
    {
        int min_ele = i;
        for(int j=i; j<N; j++)
        {
            if(arr[min_ele] > arr[j])
            {
                min_ele = j;
            }
        }
        swap(arr[i], arr[min_ele]);
    }

    for(int k=0; k<N; k++)
    {
        cout<<arr[k]<<" ";
    }
}