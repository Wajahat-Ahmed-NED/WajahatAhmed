#include<iostream>
using namespace std;
class date{
    int day;
    int month;
    int year;
    public:
    static const int monthsperyear=12;
    date(){};
    date(int d,int m,int y){
        year=(y>0&&y<=2200)?y:0;
        month=(m>0&&m<=12)?m:0;
        day=(d>0&&d<=31)?d:0;
        day=checkday(d);
    }
        int checkday(int d){
            static const int dayspermonth[monthsperyear+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
            if (d<dayspermonth[month]){
                return d;
            }
            else{
                return 1;
            }
    }
    void setdate(int d){
        day=checkday(d);
    }
    void showdate(){
        string name[]={"jan","feb","mar","apr","may","jun","july","aug","sep","oct","nov","dec"};
        cout<<day<<"/"<<name[month-1]<<"/"<<year<<endl;
    }
};
class person{
    string name;
    int age;
    string address;
    date birthdate;
    public:
    person(){};
    person(string n,int a,string ad,date d1){
        name=n;
        age=a;
        address=ad;
        birthdate=d1;
    }
    string getname(){
        return name;
    }
    void setname(string n){
        name=n;
    }
    void showdata(){
        cout<<"Name is "<<name<<endl;
        cout<<"age is "<<age<<endl;
        cout<<"address is "<<address<<endl;
        cout<<"Birthday is "<<endl;
        birthdate.showdate();
    }
};
int main(){
    date d1(20,10,2000);
    person p1("ali",20,"khi",d1);
    p1.showdata();
}