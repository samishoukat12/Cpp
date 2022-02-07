#include <iostream>
using namespace std;

// <================== CLASS FOR LINKED LIST ==================>
class linkedList
{
private:
    struct Node
    {
        int data;
        Node *next;
    };
    Node *p, *head = NULL, *temp = head;
public:
    // <================== INSERTION MEMBER FUNCTION ==================>
    void insertEnd(int data){
        p = new Node;
        p->data = data;
        p->next = NULL;
        if (head==NULL)
        {
            head = p;
        } else {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = p;
        }
    }
    void insertStrt(int data){
        p = new Node;
        p->data = data;
        p->next = head;
        head = p;
    }
    void insertAftr(int pos_num, int data){
        p = new Node;
        p->data = data;
        temp = head;
        while (temp->data != pos_num)
        {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
    }
    
    // <================== DELETION MEMBER FUNCTION ==================>
    int deleteLast(){
        temp = head;
        if (head->next != NULL)
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            int deleted = temp->next->data;
            temp->next = NULL;
            return deleted;
        } else {
            cout<<"\nIt has a single node only";
            return 0;
        }
    }
    int deleteFirst(){
        if (head == NULL)
        {
            cout<<"\nList is Empty";
            return 0;
        } else {
            int deleted = head->data;
            head = head->next;
            return deleted;
        }
    }
    void delet(int data){
        temp = head;
        while (temp->next->data != data)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

    // <================== DISPLAY MEMBER FUNCTION ==================>
    void display(){
        temp = head;
        if (head!=NULL)
        {
            while (temp!=NULL)
            {
                cout<<" "<<temp->data;
                temp = temp->next;
            }
        } else {
            cout<<"\nList is Empty";
        }
    }
};

// <================== CLASS FOR STACK ==================>
class stack : public linkedList
{
public:
    void push(int data){
        insertStrt(data);
    }
    int pop(){
        return deleteFirst();
    }
    void display(){
        linkedList::display();
    }
};

// <================== CLASS FOR QUEUE ==================>
class Queue : public linkedList
{
public:
    void enqueue(int data){
        insertEnd(data);
    }
    int dequeue(){
        return deleteFirst();
    }
    void display(){
        linkedList::display();
    }
};

int main()
{
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.dequeue();    // 1
    cout<<"\nQUEUE = ";
    queue.display();    // 2 3 4 5

    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.pop();          // 5
    cout<<"\nSTACK = ";
    stk.display();      // 4 3 2 1

    linkedList lnk1;
    lnk1.insertEnd(1);
    lnk1.insertEnd(2);
    lnk1.insertEnd(3);
    lnk1.insertEnd(4);
    lnk1.insertEnd(5);
    cout<<"\nLINKED LIST = ";
    lnk1.display();     // 1 2 3 4 5
    
    return 0;
}