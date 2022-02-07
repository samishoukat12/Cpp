#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[] = {2, 4, 1, 3, 2, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int output[10];
    int count[10];
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = len - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < len; i++)
    {
        arr[i] = output[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
    }
}
