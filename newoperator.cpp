#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    public:
    Student(){};
    void setrollno(int r){
        rollno=r;
    }
    int getrollno(){
        return rollno;
    }
};
int main(){
    Student *ptr;
    ptr=new Student;
    ptr->setrollno(10);
    cout<<ptr->getrollno()<<endl;
    Student *pt;
    pt=new Student[100];//will create 100 objects 
    for (int i=0;i<100;i++){
        pt->setrollno(i);//pt will point to every object one by one
        cout<<pt->getrollno()<<endl;
    }
    return 0;
}