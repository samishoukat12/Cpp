#include <iostream>
#include <conio.h>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    A(int i)
    {
        this->a = i;
    }
    A() {}
    int getvalue()
    {
        return a;
    }

    friend void show(A, B);
    friend void progress(A, B);
};

class B : public A
{
private:
    int b;

public:
    B(int j)
    {
        this->b = j;
    }
    friend void show(A, B);
    friend void progress(A, B);
};
void progress(A x, B y)
{
    int r = x.a + y.b;
    int multiply = x.a * y.b;
    cout << r;
    cout << multiply;
}

int main()
{
    int val, val2;
    cout << "enter value";
    cin >> val;
    A obj1(val);
    cout << "enter value2";
    cin >> val2;
    B obj2(val2);
    progress(obj1, obj2);
}