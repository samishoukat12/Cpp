#include <iostream>
#include <conio.h>
using namespace std;
class base
{
private:
    int data;

public:
    base(int uid)
    {
        data = uid;
        cout << "employee id is" << data;
    };
    int getdata(){
        return data;
    }
    // base() {}
};

class derived : public base
{
public:
    derived(int uid2) : base(uid2)
    {
       
        cout << "programmer id is" << getdata();
    }
};

int main()
{
    derived obj2(3);
}
