#include <iostream>
#include <conio.h>
using namespace std;
int swap(int arr[], int temp, int j);
int main()
{
    int val;
    cout << "enter length of array : ";
    cin >> val;
    int arr[val], temp, result;
    cout << "enter unsorted array :" << endl;
    for (int m = 0; m < val; m++)
    {
        cin >> arr[m];
    }
    for (int i = 1; i <= val - 1; i++)
    {
        for (int j = 0; j <= val - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                result = swap(arr, temp, j);
            }
        }
    }

    if (result == 1)
    {
        cout << "sorted array is : ";
        for (int k = 0; k < val; k++)
        {
            cout << arr[k];
        }
    }
    return 0;
}

int swap(int arr[], int temp, int j)
{
    temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;

    return 1;
}