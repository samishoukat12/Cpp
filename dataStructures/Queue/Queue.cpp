#include <iostream>
#include <conio.h>
using namespace std;
void Insert();
void Delete();
void Display();

int Q[10], b = -1, f = -1, n = 9, Null = 0;
void Insert()
{
    int val;
    if (b >= n)
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        b = b + 1;
        cout << "insert item : ";
        cin >> val;
        Q[b] = val;
        f = 0;
    }
}
void Delete()
{
    if (f = -1 && f > b)
    {
        cout << "underflow" << endl;
    }
    else
    {
        cout << "Deleted value is" << Q[f];
        Q[f] == Null;
        f = f + 1;
    }
}
void Display()
{
    if (f == -1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        for (int i = f; i <= b; i++)
        {
            cout << "items in queue is : " << Q[i] << endl;
        }
    }
}
int main()
{
    int choice;
    cout << "1: insert an item." << endl;
    cout << "2: delete an item." << endl;
    cout << "3: display an item." << endl;
    cout << "enter your choice number: ";
    cin >> choice;
    do
    {
        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        default:
            cout << "invalid choice";
        }
    } while (choice < 4);
    return 0;
}