#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int searchVal;
    int MAX = 7;
    int loc = 0;
    for (int i = 0; i < n; i++)
    {
        if (MAX == arr[i])
        {
            loc = 1;
            cout << "max value is" << MAX << endl;
        }
    }
    if (loc == 0)
    {
        cout << "not found";
    }
}