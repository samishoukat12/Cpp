#include <iostream>
#include <conio.h>
using namespace std;
void Insert();
void Delete();
void Display();

int Q[10], b = -1, f = -1, n = 10, Null = 0;
void Insert()
{
    int val;
    if (b == n - 1)
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        if (f == -1)

            cout << "Insert the element in queue : " << endl;
        cin >> val;
        b++;
        Q[b] = val;
        f = 0;
    }
}
void Delete()
{
    if (f == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        cout << "Deleted value is : " << Q[f] << endl;
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
    int ch;
    cout << "1: insert an item." << endl;
    cout << "2: delete an item." << endl;
    cout << "3: display an item." << endl;

    do
    {
        cout << "enter your choice number: ";
        cin >> ch;
        switch (ch)
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
        case 4:
            cout << "exit";
            break;
        default:
            cout << "invalid choice";
        }
    } while (ch != 4);
    return 0;
}
