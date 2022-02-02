#include <iostream>
#include <conio.h>
using namespace std;

class Base
{
public:
    int data;
    Base(int i)
    {
        this->data = i;
        cout << "this is constructor" << endl;
    }
    void display()
    {
        cout << data;
    }
};
class derived : public Base
{
public:
    derived(int i) : Base(i)
    {
        cout << "this is constructor 2" << endl;
    }
};
class derived1 : public derived
{
public:
    derived1(int i) : derived(i)
    {
        cout << "this is constructor 3" << endl;
    }
};
class derived2 : public derived1
{
public:
    int data2 = 10;
    derived2(int i) : derived1(i)
    {
        cout << "this is constructor 4" << endl;
        cout << data + data2;
    }
};

int main()
{
    derived2 obj(20);
    obj.display();
}