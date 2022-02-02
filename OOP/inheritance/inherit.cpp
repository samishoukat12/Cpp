#include <iostream>
#include <conio.h>
using namespace std;

class employee
{
public:
    int id;
    employee(int uid)
    {
        id = uid;
        cout << "emploeee" << id << endl;
    }
    employee(){};
};

class programmer : employee
{
public:
    programmer(int uid)
    {
        id = uid;
        cout << "programmer id" << id;
    }
};

int main()
{
    employee obj1(20);
    programmer obj(30);
    return 0;
}