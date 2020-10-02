#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Employee{
    private:
    int age;
    char *name;//string lagane se asaani se hojaega
    public:
    Employee()
    {
        age=0;
        name="Null";
    };
    Employee(int a,char n[]):age(a),name(n)
    {};
    void showdata(){
        cout<<"Employee name is "<<name<<endl;
        cout<<"Employee age is"<<age<<endl;
    };

};
int main(){
    Employee e1;
    Employee e2(20,"wajahat");
    cout<<"e2 has"<<endl;
    e2.showdata();
    e1.showdata();
    return 0;
}