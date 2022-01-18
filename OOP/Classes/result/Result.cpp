#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Result
{
private:
    int rollNo;
    float marks[3];
    char name[50];
    int subject;

public:
    void input()
    {
        cout << "enter name :";
        gets(name);
        if (true)
        {
            cout << "enter Roll No :";
            cin >> rollNo;
        }
        cout << "How many subjects you want to check :";
        cin >> subject;

        for (int i = 1; i <= subject; i++)
        {
            cout << "enter marks of " << i << " subject :";
            cin >> marks[i];
        }
    }
    void show()
    {
        cout << "Roll No :" << rollNo << endl;
        cout << "Name :" << name << endl;
        for (int j = 1; j <= subject; j++)
        {
            cout << "marks of subject " << j << "st is :" << marks[j] << endl;
        }
    }
    void check()
    {
        for (int i = 1; i <= subject; i++)
        {
            if (marks[i] >= 90)
            {
                cout << "Grade of subject " << i << " is A." << endl;
            }
            else if (marks[i] >= 60)
            {
                cout << "Grade of subject " << i << " is B." << endl;
            }
            else if (marks[i] >= 40)
            {
                cout << "Grade of subject " << i << " is C." << endl;
            }
            else
            {
                cout << "Fail" << endl;
            }
        }
    }
    int total()
    {
        int t = 0;
        for (int k = 1; k <= subject; k++)
        {
            t = t + marks[k];
        }
        return t;
    }
    int avg()
    {
        int av = 0;
        for (int m = 1; m <= subject; m++)
        {
            av = av + marks[m];
        }
        return av / 3.0 ;
    }
};

int main()
{
    Result s1;
    s1.input();
    s1.show();
    s1.check();
    s1.total();
    s1.avg();
    cout << "total is :" << s1.total() << endl;
    cout << "average is :" << s1.avg() << "%";
}