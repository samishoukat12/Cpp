#include <iostream>
#include <conio.h>
using namespace std;

class base1
{
protected:
    int data1;

public:
    base1()
    {
        data1 = 0;
    }
    ~base1(){
        cout<<"this is dectructor of base 1"<<endl;
    }
};

class base2
{
protected:
    int data2;

public:
    base2()
    {
        data2 = 0;
    }
     ~base2(){
        cout<<"this is dectructor of base 2"<<endl;
    }
};

class derived : public base1, public base2
{
public:
    int increment1()
    {
        return ++data1;
    }
    int increment2()
    {
        return ++data2;
    }
    int decrement1()
    {
        return --data1;
    }
    int decrement2()
    {
        return --data2;
    }
};

int main()
{
    base1 obj;
    base2 obj2;
    derived obj3;
    cout << "base1 increment" << obj3.increment1()<<endl;
    cout << "base 1 decrement" << obj3.decrement1()<<endl;
    cout << "base2 increment" << obj3.increment2()<<endl;
    cout << "base 2 decrement" << obj3.decrement2()<<endl;
}