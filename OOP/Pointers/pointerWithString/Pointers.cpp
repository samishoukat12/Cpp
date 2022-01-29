#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char name[15], *p;
    cout << "enter name : ";
    gets(name);
    cout << name << endl;
    p = name;
    cout << p << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << name + i << endl;
        cout << *(name + i);
    }
}