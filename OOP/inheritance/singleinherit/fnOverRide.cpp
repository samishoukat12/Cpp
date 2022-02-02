#include <iostream>
#include <conio.h>
using namespace std;

#include <iostream>
#include <conio.h>
using namespace std;
class Base
{
private:
    int data;

public:
    Base(int i)
    {
        this->data = i;
        cout << "this is constructor of Base" << endl;
    }

    void print()
    {
        cout << data<<endl;
    }
};

class Derived : public Base
{
public:
    int data2;
    Derived(int j) : Base(j)
    {
        this->data2 = j;
        cout << "this is derived constructor";
    }
    void print()
    {
        cout << data2<<endl;
        Base::print();
    }

    
};


int main(){
    Derived obj(10);
    obj.print();
    obj.Base::print();
}