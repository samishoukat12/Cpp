#include <iostream>
#include <conio.h>
using namespace std;
class table
{
private:
    int n, a, result;

public:
    void input()
    {
        cout << "enter table number :";
        cin >> n;
        cout << endl;
        cout << "enter number or time table run :";
        cin >> a;
        cout << endl;
    }
    void table1()
    {
        for (int i = 0; i <= a; i++)
        {
            cout << n << "*" << i << "=" << n * i << endl;
        }
    }
};

int main()
{
    table obj1;
    obj1.input();
    obj1.table1();
}
