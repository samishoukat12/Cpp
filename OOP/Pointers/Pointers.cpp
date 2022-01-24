#include <iostream>
#include <conio.h>
using namespace std;
void simple()
{

    int arr = 10;
    int *p;
    p = &arr;
    cout << p << endl;
    cout << *p << endl;
}

void ArrayPointers()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = arr;
    cout << "address :" << p << endl;
    cout << "value :" << *p << endl;
    // arr++ invalid
    p++; // valid
    cout << "address :" << p << endl;
    cout << "value : " << *p << endl;
    p++;
    cout << "address :" << p << endl;
    cout << "value :" << *p << endl;
    p++;
    cout << "address :" << p << endl;
    cout << "value :" << *p << endl;
    p++;
    cout << "address :" << p << endl;
    cout << "value :" << *p << endl;
}
void Pointers()
{
    int arr[5];
    cout << "enter array";
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j <= 4; j++)
    {
        cout <<"address :"<< &arr[j] << endl;
        cout <<"address :"<< arr + j << endl;
        cout <<"value is : "<< arr[j] << endl;
        cout <<"value is : "<<  *(arr + j) << endl;
    }
}
int main()
{
    simple();
    ArrayPointers();
    Pointers();
}