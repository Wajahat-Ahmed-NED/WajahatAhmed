#include<iostream>
using namespace std;
struct myname{
    string day;
    string month;
    int year;
};
void date_comparison(myname *a,myname * b){
    if (a->day==b->day && a->month==b->month && a->year==b->year){
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"unequal"<<endl;
    }
}
int main(){
    myname m;
    m.day="fourteen";
    m.month="may";
    m.year=2002;
    myname m1;
    cout<<"Enter day in string format"<<endl;
    cin>>m1.day;
    cout<<"Enter month in string format"<<endl;
    cin>>m1.month;
    cout<<"Enter year in integer format"<<endl;
    cin>>m1.year;
    myname *p1,*p2;
    p1= & m;
    p2= & m1;
    date_comparison(&m,&m1);
}
