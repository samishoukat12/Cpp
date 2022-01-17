#include <iostream>
#include <conio.h>
using namespace std;
class marks
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "enter marks 1:";
        cin >> a;
        cout << endl;
        cout << "enter marks 2:";
        cin >> b;
        cout << endl;
        cout << "enter marks 3:";
        cin >> c;
        cout << endl;
    }
    int sum1(){
        return a+b+c;
    }
    int average(){
        return a+b+c/3.0;
    }
};


int main(){
    marks obj1;
    int s;
    float z;
    obj1.input();
    s=obj1.sum1();
    z=obj1.average();
    cout<<"sum is :"<<s<<endl;
    cout<<"average is :"<<z;
}