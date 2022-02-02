#include<iostream>
#include<conio.h>
using namespace std;

class Base{
    public:
    int data;
    Base(){
        cout<<"This is base constructor";
    }
    Base(int i):data(i){
    cout<<"this is constructor 2"<<data<<endl;
    }
    ~Base(){
        cout<<"this is distrcutor 1"<<endl;
    }
};

class derived1:public Base{
    public :
    int data1;

    derived1(int ij):Base(ij){
        
          cout<<"this is constructor 3"<<data<<endl;
    }
     ~derived1(){
        cout<<"this is distrcutor derived1"<<endl;
    }
};
class derived2: public Base{
     public :
    int data2;

    derived2(int ij):Base(ij){
        
          cout<<"this is constructor 3"<<data<<endl;
    }
     ~derived2(){
        cout<<"this is distrcutor derived2"<<endl;
    }
};
class derived3: public Base{
     public :
    int data2;

    derived3(int ij):Base(ij){
        
          cout<<"this is constructor 3"<<data<<endl;
    }
     ~derived3(){
        cout<<"this is distrcutor derived3"<<endl;
    }
};
int main(){
    derived3 obj(10);
}