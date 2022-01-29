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
    node *start;
    node *one;
    node *two;

    one = new node();
    two = new node();

    one->data = 1;
    two->data = 2;

    one->link = two;
    two->link = NULL;

    start=one;

    while(start!=NULL){
        cout<<start->data;
        start=start->link;
    }
}