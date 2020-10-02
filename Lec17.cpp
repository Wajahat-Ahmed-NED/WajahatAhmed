#include<iostream>
using namespace std;
class Employee{
    int age;
    char *name;
    public:
    Employee(){
        age=0;
        name=NULL;
    }
    Employee(int a,char n[]):age(a),name(n)
    {};
    void showdata(){
        cout<<"Employee name is "<< name <<endl;
        cout<<"Age is "<<age<<endl;
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age=a;
    }
    char* getname(){
        return name;
    }
    void setname(char n[]){
        name=n;
    }
};
int main(){
    Employee e1;
    Employee e2(20,"Abdullah");
    cout<<"e2 has"<<endl;
    e2.showdata();
    cout<<e2.getname()<<endl;
    cout<<e2.getname()<<endl;
    e2.setname("Wajahat");
    e2.setage(19);
    cout<<"e2 has"<<endl;
    e2.showdata();
    return 0;
}