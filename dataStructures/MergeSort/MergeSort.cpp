#include <iostream>
#include <conio.h>
using namespace std;
void mergeSort(int[], int start, int end);
void merge(int[], int start, int mid, int end);
void display(int arr[], int n);
#define max 5

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
void merge(int arr[], int start, int mid, int end)
{
    int temp[max];
    int i = start, j = mid + 1, k = start;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }
    for (int p = start; p <= end; p++)
    {
        arr[p] = temp[p];
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int i;
    int n = max;
    int arr[max];
    cout << "enter unsorted array " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "array as it is:" << endl;
    display(arr, n);
    cout << "sorted array:" << endl;
    mergeSort(arr, 0, 6);
    display(arr, n);
    return 0;
}