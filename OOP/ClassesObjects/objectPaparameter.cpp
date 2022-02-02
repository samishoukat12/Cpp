#include <iostream>
#include <conio.h>
using namespace std;
class time
{
private:
    int n, m;

public:
    void get(int, int);
    void put(void);
    void sum(time, time);
};

void time ::get(int minute, int hours)
{
    minute = n,
    hours = m;
}

void time ::put(void)
{
    cout << "hours" << m;
    cout << "minutes" << n;
}

void time ::sum(time t1, time t2)
{
    hours = t1.minute + t1.minute;
}
