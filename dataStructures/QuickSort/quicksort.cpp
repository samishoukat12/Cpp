#include <iostream>
#include <conio.h>
using namespace std;

// int quickSort(int[], int start, int end);
// int partition(int[], int start, int end);

int partition(int arr[], int start, int end)
{
    int pIndex = start;
    int pivot = arr[end];
    int temp;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            // swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    temp = arr[pIndex];
    arr[pIndex] = arr[end];
    arr[end] = temp;
    // swap(arr[pIndex], arr[end]);
    return pIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
    
}

int main()
{
    int arr[] = {1, 3, 4, 2, 5, 6};
    int start = 0;
    int end = 5;
     quickSort(arr, start, end);
   
        for (int i = start; i <= end; i++)
        {
            cout << arr[i];
        }
   
}