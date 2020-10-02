#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Employee{
    private:
    int age;
    char *name;
    public:
    Employee()
    {
    };
    Employee(int a,char n[]):age(a),name(n)
    {};
    void showdata(){
        cout<<"Employee name is "<<name<<endl;
        cout<<"Employee age is"<<age<<endl;
    };
    int get_age()
    {
        return age;
    };
    void set_age(int a){
        age=a;
    }
    char* get_name(){
        return name;
    }
    void set_name(char n[]){
        name=n;
    }

};
int main(){
    Employee e1;
    Employee e2(20,"wajahat");
    cout<<"e2 has"<<endl;
    e2.showdata();
    e1.set_age(23);
    e1.set_name("ali");
    cout<<e1.get_age()<<endl;
    cout<<e1.get_name()<<endl;
    e2.set_age(29);
    e2.set_name("hamza");
    cout<<e2.get_age()<<endl;
    cout<<e2.get_name()<<endl;
    return 0;
}