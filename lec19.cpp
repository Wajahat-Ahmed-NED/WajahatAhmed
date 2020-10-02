#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Shape
{
    protected:
    int height;
    int width;
    static int count;
    public:
    Shape()
    {};
    Shape(int h,int w):height(h),width(w)
    {
        count++;
    };
    ~Shape()
    {
        count--;
    };
    int getcount(){
        return count;
    }
    int getheight()
    {return height;
    };
    void setheight(int h)
    {
        height=h;
    };
    int getwidth()
    {
        return width;
    };
    void setwidth(int w){
        width=w;
    };
    virtual string showdata(){
        return "I am a parent class";
    };
    virtual double area(){
        return 0.0;
    };
};
int Shape::count=0;
class Rectangle:public Shape
{
    public:
    Rectangle(int h,int w):Shape(height,width)
    {};
    virtual string showdata(){
        return "I am Rectangle class and child of shape class";

    }
    virtual double area(){
        return height*width;
    }
};
class Triangle:public Shape
{   private:
    int angle;
    public:
    Triangle(int h,int w,int a):Shape(height,width)
    {
     angle=a;
    };
    virtual double area(){
        return width*height;
    }
    virtual string showdata(){
        return "I am triangle and I am child of class shape";
    }
};
int main(){
    Rectangle r1(4,5);
    cout<<"The number of members in class are r1"<<r1.getcount()<<endl;
    Rectangle r2(4,5);
    cout<<"The number of members in class are r2"<<r2.getcount()<<endl;
    cout<<"The number of members in class are by r1"<<r1.getcount()<<endl;
    Triangle t1(3,5,56);
    cout<<"The number of members in class are by t1"<<t1.getcount()<<endl;
    cout<<"The number of members in class are"<<r2.getcount()<<endl;
    cout<<"The number of members in class are"<<r1.getcount()<<endl;
    cout<<"The area of rectangle r1 is found to be"<<r1.area()<<endl;
    cout<<"This is child class triangle"<<endl;
    cout<<t1.showdata()<<endl;
    cout<<"Great 90 lines ki  coding hoi ha hahahaa"<<endl;
    _getch();
    return 0;
}