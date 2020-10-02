#include<iostream>
using namespace std;
class shape{
    protected:
    int width;
    int height;
    public:
    shape();
    shape(int height,int width){
        this->height=height;
        this->width=width;
    }
    virtual double area(){
        return 0.0;
    }
};
class Rectangle:public shape
{
    public:
    Rectangle(int height,int width):shape(height,width)
    {};
    virtual double area(){
        return width*height;
    }
};
class triangle:public shape
{
    public:
    triangle(int height,int width):shape(height,width)
    {};
    virtual double area(){
        return width*height/2;
    }
};
int main(){
    Rectangle r1(2,54);
    triangle t1(2,54);
    cout<<"Rectangle is "<<r1.area()<<endl;

    cout<<"Triangle is "<<t1.area()<<endl;
}
