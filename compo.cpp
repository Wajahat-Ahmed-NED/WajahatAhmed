#include<iostream>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    static const int monthsperyear=12;//constant yahi define krdo
    date(){};
    date(int d,int m,int y){
        year=(y>0 && y<=2030)?y:0;
         month=(m>0 && m <=12)?m:0;
          day=checkday(d);
    }
    int checkday(int d) const{
        static const int dayspermonth[monthsperyear+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if (d<=dayspermonth[month]){
            return d;
        }
        else{
            return 1;
        }
    }
    void setdate(int d,int m,int y){
        year=(y>0 && y<=2030)?y:0;
         month=(m>0 && m <=12)?m:0;
          day=checkday(d);
    }
    void showdata(){
        string name[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        cout<<day<<" / "<<name[month-1]<<" / "<<year<<endl;
    }
};
class Person{
    private:
    string name;
    int age;
    string address;
    date birthday;
    public:
    Person(){};
    Person(string n,int a, string add,date d){
        name=n;
        age=a;
        address=add;
        birthday=d;
    };
    string getname(){
        return name;
    }
    void setname(string n){
        name=n;
    }
    void showdata(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Address is "<<address<<endl;
        cout<<"Birthday is "<<endl;
        birthday.showdata();
    }
};
int main(){
    date d1(7,5,2001);
    Person p("Wajahat",19,"Karachi",d1);
    p.showdata();
}