#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *Top = NULL;
void push(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->link = Top;
    Top = temp;
}
void pop(int x)
{
    node *temp = new node();
    if (Top == NULL)
    {
        return;
    }
    temp = Top;
    free(temp);
}
int main()
{

    int x = 10;
    push(x);
    pop(x);
}