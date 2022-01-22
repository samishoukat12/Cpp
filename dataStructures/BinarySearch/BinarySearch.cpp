#include <iostream>
#include <conio.h>
using namespace std;
int BinarySearch(int arr[], int start, int mid, int end, int SearchVal);
int main()
{
    int val;
    cout << "enter the length of array :";
    cin >> val;
    int arr[val], start = 0, end = val - 1, mid, SearchVal;
    cout << "enter value in ascending order :" << endl;
    for (int i = 0; i < val; i++)
    {
        cout << "val :";
        cin >> arr[i];
        cout << endl;
    }
    cout << "enter value to be search";
    cin >> SearchVal;
    int result = BinarySearch(arr, start, mid, end, SearchVal);

    if (result == -1)
    {
        cout << "value not found";
    }
    else
    {
        cout << "value found";
    }
}

int BinarySearch(int arr[], int start, int mid, int end, int SearchVal)
{
    for (int i = start; i <= end; i++)
    {
        mid = (start + end) / 2;
        if (SearchVal == arr[mid])
        {
            return mid;
        }
        else if (SearchVal >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}