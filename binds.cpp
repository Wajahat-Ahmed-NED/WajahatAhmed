#include<iostream>
using namespace std;
class Base
{
public:
virtual void show()// vritual lagane se ye late binding krega to is ka object nai banega
//thats will show derived class
{
cout<<"class base"<<endl;
}
};
class derived:public Base{
    public:
    virtual void show(){
        cout<<"class derived"<<endl;
    }
};
int main(){
    Base *b;
    derived d1;
    b=&d1;
    b->show();
}