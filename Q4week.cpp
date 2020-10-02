#include<iostream>
#include<string>
using namespace std;
struct address{
    int houseno;
    string city;
    int pincode;
};
struct employee{
    int empid;
    double salary;
    string empname;
    address add;
};
int main(){
    employee e1;
        cout<<"Enter employee name "<<endl;
    cin>>e1.empname;
    cout<<"Enter employee ID "<<endl;
    cin>>e1.empid;
    cout<<"Enter employee salary "<<endl;
    cin>>e1.salary;
    if (e1.salary<50000){
        e1.salary=e1.salary+(e1.salary*0.2);
    }
    cout<<"Enter employee houseno "<<endl;
    cin>>e1.add.houseno;
    cout<<"Enter employee city "<<endl;
    cin>>e1.add.city;
    cout<<"Enter employee pin code "<<endl;
    cin>>e1.add.pincode;
    cout<<"Employee name is "<<e1.empname<<endl;
    cout<<"Employee id is "<<e1.empid<<endl;
    cout<<"Employee salary is "<<e1.salary<<endl;
    cout<<"Employee house no is "<<e1.add.houseno<<endl;
    cout<<"Employee city is "<<e1.add.city<<endl;
    cout<<"Employee pincode is "<<e1.add.pincode<<endl;
    return 0;
}