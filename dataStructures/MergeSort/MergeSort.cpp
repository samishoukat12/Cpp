#include <iostream>
#include <conio.h>
using namespace std;
void mergeSort(int[], int start, int end);
int main()
{
    int i, arr[] = {1, 3, 7, 6, 5, 3};
    cout << "unsorted array is: ";
    for (i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
    mergeSort(arr, 0, 6);
}
void mergeSort(int arr[], int start, int end)
{
    if(start<end){
        int mid=start+end/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
    }
}