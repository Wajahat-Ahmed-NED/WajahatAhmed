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
    circle(int x,int y, double r):xcord(x),ycord(y),radius(r)
    {};
    int getxcord(){
        return xcord;
    }
    void setxcord( int x){
        xcord=x;
    }
    int getycord(){
        return ycord;
    }
    void setycord( int x){
        ycord=x;
    }
    double getradius(){
        return radius;
    }
    void setradius( double x){
        radius=x;
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
        cout<<"Xcord is "<<xcord<<endl;
        cout<<"Ycord is "<<ycord<<endl;
        cout<<"Radius is "<<radius<<endl;
    }
};
int main(){
    int x,y,z;
    circle c1;
    circle c2(4,6,7);
    c1.showdata();
    cout<<"this is c2"<<endl;
    c2.showdata();
    cout<<c2.circumference()<<endl;
    cout<<c2.area()<<endl;
    cout<<"Enter x cord "<<endl;
    cin>>x;
    c1.setxcord(x);
    cout<<"Enter y cord "<<endl;
    cin>>y;
    c1.setycord(y);
    cout<<"Enter radius "<<endl;
    cin>>z;
    c1.setradius(z);
    cout<<"New values for c1 are "<<endl;
    c1.showdata();
    return 0;
}

