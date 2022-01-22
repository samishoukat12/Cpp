#include <iostream>
#include <conio.h>
using namespace std;
int InsertionSort(int arr[], int hole, int value, int val);
int main()
{
    int val;
    cout << "enter length of array : ";
    cin >> val;
    int arr[val], hole, value;
    cout << "enter unsorted array : " << endl;
    for (int i = 0; i < val; i++)
    {
        cin >> arr[i];
    }
    int result = InsertionSort(arr, hole, value, val);
    if (result == 1)
    {
        cout << "sorted array is : "
             << "{";
        for (int i = 0; i < val; i++)
        {
            cout << arr[i];
        }
        cout << "}";
    }
}

int InsertionSort(int arr[], int hole, int value, int val)
{
    for (int i = 1; i < val - 1; i++)
    {
        value = arr[i];
        hole = i;
        while (hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }
        arr[hole] = value;
    }
    return 1;
}