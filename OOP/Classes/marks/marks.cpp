#include <iostream>
#include <conio.h>
using namespace std;

class marks
{
private:
    int a, b, c;
    int sum;
    float average;

public:
    void input()
    {
        cout << "enter subject 1 marks:";
        cin >> a;
        cout << endl;
        cout << "enter subject 2 marks:";
        cin >> b;
        cout << endl;
        cout << "enter subject 3 marks";
        cin >> c;
        cout << endl;
    }
    void sum1()
    {
        sum = a + b + c;
        cout << "total sum is" << sum << endl;
    }
    void averag()
    {
        average = (a + b + c) / 3.0;
        cout << "average is :" << average;
    }
};
int main()
{
    marks obj1;
    obj1.input();
    obj1.sum1();
    obj1.averag();
    getch();
}
