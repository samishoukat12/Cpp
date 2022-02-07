#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
    int data;
    node *link;
};

int main()
{
    node *start=NULL;
    node *one;
    node *two;
    node *small;
    small = new node();
    one = new node();

    one->data = 1;
    two->data = 2;
    small->data = 12;
    one->link = two;
    two->link = NULL;
    small->link = start;
    start = small;

    while (start != NULL)
    {
        cout << start->data;
        start = start->link;
    }
}