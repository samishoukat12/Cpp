
// program 1
#include <iostream>
#include <conio.h>
using namespace std;

class FirstClass
{
private:
    int n;

public:
    void input()
    {
        cout << "enter value of n"
             << ":";
        cin >> n;
    }
    void output()
    {
        cout << n;
    }
};
int main()
{
    FirstClass obj1;
    obj1.input();
    obj1.output();
    getch();
}
