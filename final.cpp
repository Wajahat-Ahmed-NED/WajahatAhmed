#include<iostream>
using namespace std;
class Employee{
    private:
    int age;
    char *name;
    public:
    Employee(){};
    Employee(int a,char n[]):age(a),name(n)
    {};
    void showdata(){
        cout<<"Employee age is "<<age<<endl;
        cout<<"Employee name is "<<name<<endl;
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age=a;
    }
    void setname(char n[]){
        name=n;
    }
    char* getname(){
        return name;
    }
};
int main(){
    Employee e1(19,"wajahat ahmed");
    e1.showdata();
    cout<<e1.getage()<<endl;
    cout<<e1.getname()<<endl;
    e1.setage(20);
    e1.setname("Ahmed");
    e1.showdata();
    return 0;
}