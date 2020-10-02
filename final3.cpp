#include<iostream>
using namespace std;
class shape{
    protected:
    int height;
    int width;
    static int count;
    public:
    shape();
    shape(int h,int w):height(h),width(w)
    {count++;
    };
    ~shape(){
        count--;
    }
    int getheight(){
        return height;
    }
    int getwidth(){
        return width;
    }
    int getcount()
{
    return count;
}    void setheight(int h){
        height=h;
    }
    void setwidth(int w){
        width=w;
    }
    virtual string showdata(){
        return "I am parent";
    }
    virtual double area(){
        return width*height;
    }
};
int shape::count=0;
class rectangle:public shape
{
    public:
    rectangle(int h,int w):shape(h,w){
    };
    virtual string showdata(){
        return"I am child rectangle";
    }
    virtual double area(){
        return width*height;
    }
};
class triangle:public rectangle
{
    double angle;
    public:
    triangle(int h,int w,double andle):rectangle(h,w)
    {
        angle=andle;
    }
    virtual string showdata(){
        return"I am child triangle";
    }
    virtual double area(){
        return width*height/2;
    }
};
int main(){
    rectangle r1(3,5);
    triangle t1(3,23,54.1);
    cout<<"Area of rectangle is found to be "<<r1.area()<<endl;
    cout<<"Area of triangle is found to be "<<t1.area()<<endl;
    cout<<"Nubmer of shapes created are "<<r1.getcount()<<endl;
    return 0;
}