#include <iostream>
#include <conio.h>
using namespace std;
int SelectionSort(int arr[], int temp, int iMin, int val);
void swap(int temp, int i, int arr[], int iMin);
int main()
{
    int val;
    cout << "enter length of array : ";
    cin >> val;
    int arr[val], temp, iMin;
    cout << "enter unsorted array : " << endl;
    for (int i = 0; i < val; i++)
    {
        cin >> arr[i];
    }
    int result = SelectionSort(arr, temp, iMin, val);
    if (result == 1)
    {
        cout << "sorted array is : " << endl;
        for (int k = 0; k < val; k++)
        {
            cout << arr[k];
        }
    }
    return 0;
}

int SelectionSort(int arr[], int temp, int iMin, int val)
{
    int i;
    for (i = 0; i < val - 1; i++)
    {
        iMin = i;
        for (int j = i + 1; j < val; j++)
        {
            if (arr[j] < arr[iMin])
            {
                iMin = j;
            }
        }
        swap(temp, i, arr, iMin);
    }
    return 1;
}
void swap(int temp, int i, int arr[], int iMin)
{
    temp = arr[i];
    arr[i] = arr[iMin];
    arr[iMin] = temp;
}