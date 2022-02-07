#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[6], val, searchVal, index, n;
    int *X=NULL;
    n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << "enter value";
        cin >> val;
        index = val / n;
        if (arr[index] == X)
        {
            arr[index] = val;
        }
        else
        {
            cout << "collision occur";
        }
    }

    cout << "enter value to search";
    cin >> searchVal;
    index = searchVal / n;
    if (arr[index] == X)
    {
        cout << "not found";
    }
    else
    {
        cout << "value found at" << index << "and value is" << arr[index];
    }
}
