#include<iostream>
using namespace std;
class circle{
    int xcord;
    int ycord;
    double radius;
    public:
    circle(){
        xcord=0;
        ycord=0;
        radius=0.0;
    }
    circle(int xcord,int ycord){
        this->xcord=xcord;
        this->ycord=ycord;
        radius=0.0;

    }
    circle(int xcord,int ycord,double radius):xcord(xcord),ycord(ycord),radius(radius)
    {};
    int getxcord(){
        return xcord;
    }
    void setxcord(int x){
        xcord=x;
    }
    int getycord(){
        return ycord;
    }
    void setycord(int y){
        ycord=y;
    }
    double getradius(){
        return radius;
    }
    void setradius(double r){
        radius=r;
    }
    double getcircumference(){
        double pi=3.14;
        return 2*pi*radius;
    }
    double getarea(){
        double pi=3.14;
        return pi*radius*radius;
    }
    void showdata(){
        cout<<"Xcord is "<<xcord<<endl;
        cout<<"Ycord is "<<ycord<<endl;
        cout<<"Radius  of circle is "<<radius<<endl;
    }
};
int main(){
    circle c1(3,5,3.5);
    cout<<"Area of circle is found to be "<<c1.getarea()<<endl;
    cout<<"Circumference of circle is found to be "<<c1.getcircumference()<<endl;
    c1.showdata();
    return 0;
}