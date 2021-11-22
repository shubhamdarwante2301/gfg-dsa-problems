#include <iostream>
#include <algorithm>
using namespace std;

void findTriplets(int arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bool check = false;
    for (int k = 0; k < size; k++)
    {
        int i = k + 1;
        int j = size - 1;

        while (i < j)
        {

            if (arr[i] + arr[k] + arr[j] == 0)
            {
                check = true;

                break;
            }
            else if (arr[i] + arr[k] + arr[j] < 0)
            {

                i++;
            }
            else
            {

                j--;
            }
        }
        if (check == true)
        {
            cout << "triplet found";
            break;
        }
    }
    if (check == false)
    {
        cout << "triplet not found";
    }
}

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findTriplets(arr, size);
    return 0;
}