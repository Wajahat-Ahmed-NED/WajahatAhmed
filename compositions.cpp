#include<iostream>
#include<string>
using namespace std;
class date{
    int day;
    int month;
    int year;
    public:
    static const int monthsperyear=12;
    date(){};
    date(int d,int m, int y):day(d),month(m),year(y)
    {year=(y>0&&y<=2030)?y:0;
    month=(m>0&&m<=12)?m:0;
    day=(d>0&&d<=31)?d:0;
    day=checkday(d);
    };
    int checkday(int d) const{
        static const int dayspermonth[monthsperyear+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if (d<dayspermonth[month])
            return d;
        else{
            return 1;
        }
    }
    void setdate(int d,int m, int y)
    {year=(y>0&&y<=2030)?y:0;
    month=(m>0&&m<=12)?m:0;
    day=(d>0&&d<=31)?d:0;
    day=checkday(d);
    };
    void showdate(){
        string name[]={"Jan","Feb","Mar","Apr", "May","June","July","Aug","Sep","Oct","Nov","Dec"};
        cout<<day<<"/"<<name[month-1]<<"/"<<year;
    }
};
class Person{
    private:
    string name;
    int age;
    string address;
    date birthdate;
    public:
    Person(){};
    Person(string n,int a,string ad,date d1){
        name=n;
        address=ad;
        age=a;
        birthdate=d1;
    }
    string getname()
    {return name;
    }
    void setname(string n){
        name=n;
    }
    string getaddress()
    {return address;
    }
    void setaddress(string ad){
        address=ad;
    }
    int getage()
    {return age;
    }
    void setage(int a){
        age=a;
    }
    date getbirthdate()
    {return birthdate;
    }
    void setbirthdate(date d1){
        birthdate=d1;
    }
    void showdata(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Address is "<<address<<endl;
        cout<<"Birthdate is "<<endl;
        birthdate.showdate();
        cout<<endl;
    }
};
int main(){
    date d1(20,2,2020);
    Person p1("Ali",20,"Karachi",d1);
    date d2(4,6,2010);
    Person p2("Zara",1908,"Lahore",d2);
    p1.showdata();
    p2.showdata();
}