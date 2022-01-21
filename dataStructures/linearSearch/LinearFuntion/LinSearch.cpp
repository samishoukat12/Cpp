#include <iostream>
#include <conio.h>
using namespace std;

int Search(int arr[], int n, int val, int arrSize);

int Search(int arr[], int n, int val, int arrSize)
{
    for (int j = 0; j <= arrSize; j++)
    {
        if (n == arr[j])
        {
            return j;
        }
    }
    return -1;
}
int main()
{
    int val;
    cout << "enter size of array ";
    cin >> val;
    int arr[val], n;
    cout << "enter value in array" << endl;
    for (int i = 0; i < val; i++)
    {
        cin >> arr[i];
    }
    cout << "enter value to search ";
    cin >> n;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int result = Search(arr, n, val, arrSize);
    if (result == -1)
    {
        cout << "not Found";
    }
    else
    {
        cout << "found";
    }

    return 0;
}
