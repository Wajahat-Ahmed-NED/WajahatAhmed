#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Circle{
    private:
    int xcord;
    int ycord;
    double radius;
    public:
    Circle(){
        xcord=0;
        ycord=0;
        radius=0;
    };
    Circle(int x,int y,double r){
        xcord=x;
        ycord=y;
        radius=r;
    };
    int getx(){
        return xcord;
    }
    int gety(){
        return ycord;
    }
    void setx(int x){
        xcord=x;
    }
    void sety(int y){
        ycord=y;
    }
    int get_radius(){
        return radius;
    }
    void set_radius(double r){
        radius=r;
    }
    double circumference(){
        const int pi=3.14;
        return 2*pi*radius;
    }
    double area(){
        const int pi=3.14;
        return pi*radius*radius;
    }
    void showdata(){
        cout<<xcord<<endl;
        cout<<ycord<<endl;
        cout<<radius<<endl;
    }
};
int main(){
    int x,y,z;
    Circle c1;
    Circle c2(4,7,9.43);
    c1.showdata();
    c2.showdata();
    cout<<c2.circumference()<<endl;
    cout<<c2.area()<<endl;
    cout<<"enter valude for xcord"<<endl;
    cin>>x;
    c1.setx(x);
    cout<<"enter radius"<<endl;
    cin>>y;
    c1.set_radius(y);
    cout<<c1.circumference()<<endl;
    cout<<c1.area()<<endl;
    return 0;

}