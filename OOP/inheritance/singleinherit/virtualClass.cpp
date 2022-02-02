#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    int number = 10;
};
class B : public virtual A
{
};
class C : public virtual A
{
};

class D : public B, public C
{
};

int main(){
    D obj;
    cout<<obj.number;
}