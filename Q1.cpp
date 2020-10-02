#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    string gender;
    public:
    person(){};
    person(string n,int a,string g){
        name=n;
        age=a;
        gender=g;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    void setName(string n)
    {
         name=n;
    }
    void setAge(int a)
    {
        age=a;
    }
    void setGender(string g)
    {
        gender=g;
    }
    void  eat(){
        cout<<"Person can eat"<<endl;
    }
    void walk(){
        cout<<"Person can walk"<<endl;
    }
};
class student:public person{
    string program;
    int studyyear;
    public:
    student(){};
    student(string n,int a,string g,string prog,int std):person(n,a,g)
    {
        program=prog;
        studyyear=std;
    }
    string getProgram()
    {
        return program;
    }
    int getStudyYear()
    {
        return studyyear;
    }
    void setProgram(string p)
    {
        program=p;
    }
    void setStudyYear(int s)
    {
        studyyear=s;
    }
    void study(){
        cout<<"Student study in this year "<<studyyear<<endl;
    }
    void heldexam(){
        cout<<"Students exams are held online "<<endl;
    }
};
class teacher:public person{
    string designation;
    double salary;
    public:
    teacher(){};
    teacher(string n,int a,string g,string d,double s):person(n,a,g)
    {
        designation=d;
        salary=s;
    }
    string getDesignation()
    {
        return designation;
    }
    int getSalary()
    {
        return salary;
    }
    void setDesignation(string d)
    {
        designation=d;
    }
    void setSalary(int sa)
    {
        salary=sa;
    }
    void teach(){
        cout<<"Teacher teaches students"<<endl;
    }
    void takeexam(){
        cout<<"Teacher takes exams"<<endl;
    }
};
class Doctor {
private:
    string designation;
    double salary;
public:
    Doctor(){ };
    Doctor(string d, double s): designation(d), salary(s) {};
    string getDesignation() {
        return designation;
    }
    double getSalary(){
        return salary;
    }
    void setDesignation(string d) {
        designation = d;
    }
    void setSalary(double s) {
        salary = s;
    }
    void Checkup() {
        cout << "Checkup patients!" << endl;
    }
    void Prescribe() {
        cout << "Prescribe some medicines!" << endl;
    }
};

int main()
{
    cout << "Name:Wajahat Ahmed" << endl;
    cout << "Roll no: SE-038" << endl << endl;
    student s1("wajahat",19,"male","Software",1);
    cout << "Student details:" << endl;
    s1.eat();
    s1.heldexam();
    s1.study();
    cout << endl;

    teacher t1("Asma",45,"female","lecturer",290210);
    cout << "Teacher details:" << endl;
    t1.walk();
    t1.teach();
    cout << endl;

    Doctor d1("19 grade", 140000);
    cout << "Doctor details:" << endl;
    d1.Checkup();
    d1.Prescribe();


}