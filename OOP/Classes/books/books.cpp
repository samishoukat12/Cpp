#include <iostream>
#include <conio.h>
using namespace std;
class books
{
private:
    int BookId, Pages;
    float Price;

public:
    void get()
    {
        cout << "enter book iD :";
        cin >> BookId;
        cout << "enter book pages :";
        cin >> Pages;
        cout << "enter book price :";
        cin >> Price;
    }
    void show()
    {
        cout << "id of Book is :" << BookId << endl;
        cout << "pages of books :" << Pages << endl;
        cout << "price of object 1 book is :" << Price << endl;
    }
    void set(int id, int pg, int pr)
    {
        BookId = id;
        Pages = pg;
        Price = pr;
    }
    int getPrice()
    {
        return Price;
    }
};

int main()
{
    books s1, s2;
    s1.get();
    s1.show();
    s2.set(5, 302, 700);
    if (s1.getPrice() > s2.getPrice())
    {
        cout << "Price of object 1 book is" << s1.getPrice() << endl;
    }
    else
    {
        cout << "Price of object 2 book is" << s2.getPrice() << endl;
    }
}
