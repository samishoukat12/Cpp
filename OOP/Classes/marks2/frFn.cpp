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
        this->a=i;
    }
    friend void show(A, B);
};

class B
{
private:
    int b;

public:
    B(int j)
    {
      this-> b = j;
    }
    friend void show(A, B);
};
void show(A x, B y)
{
    int r;
    r = x.a + y.b;
    cout<<r;
}
int main()
{
    A obj1(10);
    B obj2(20);
     show(obj1, obj2);
}