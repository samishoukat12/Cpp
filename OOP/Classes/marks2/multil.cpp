#include <iostream>
#include <conio.h>
using namespace std;

class A
{
private:
    int a;

public:
    A()
    {
        a = 10;
    }

    int getValue(){
        return a;
    }
};

class B
{
private:
    int b;

public:
    B()
    {
        b = 20;
    }
      int getValue2(){
        return b;
    }
};
class C : public B, public A
{
private:
    int c;

public:
    C()
    {
        c = getValue2() + getValue();
        cout<<c;
    }
};


int main(){
    C obj;
   
}