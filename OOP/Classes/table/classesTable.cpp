// program 2
#include <iostream>
#include <conio.h>
using namespace std;
class table
{
private:
    int n, result;

public:
    void tableInput()
    {
        cout << "enter table num :";
        cin >> n;
    }
    void tableMultiply()
    {

        for (int i = 0; i <= 10; i++)
        {
            result = n * i;
            cout << n << "*" << i << "=" << result << endl;
        }
    }
};

int main()
{
    table obj1;
    obj1.tableInput();
    obj1.tableMultiply();
    getch();
}