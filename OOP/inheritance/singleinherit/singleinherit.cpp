#include <iostream>
#include <conio.h>
using namespace std;

class move
{
protected:
    int step;

public:
    move()
    {
        step = 0;
    }
   
};

class move2 : public move
{
public:
    int forward()
    {
        return step++;
    }
    int backward()
    {
        return --step;
    }
    void display()
    {
        cout << "forward" << forward() << endl;
        cout << "backward" << backward() << endl;
    }
};

int main()
{

    move2 obj;
    obj.forward();
    obj.display();
    obj.backward();
    obj.display();
}
