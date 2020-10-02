#include<iostream>
using namespace std;
class Box{
    private:
    double height;
    double width;
    double length;
    public:
    Box(){};
    Box(double h,double w,double l):height(h),width(w),length(l)
    {};
    double getheight(){
        return height;
    }
    void setheight(int h){
        height=h;
    }
    double getwidth(){
        return width;
    }
    void setwidth(int w){
        width=w;
    }
    double getlength(){
        return length;
    }
    void setlength(int l){
        length=l;
    }
    double volume(){
        return height*width*length;
    }
    Box operator+(const Box &b){
        Box box;
        box.height=this->height+b.height;
        box.width=this->width+b.width;
        box.length=this->length+b.length;
        return box;
    }
};
int main(){
    Box b1(5.3,5.9,9.3);
    Box b2(5.23,5.4,2.3);
    Box b3;
    b3=b1+b2;
    cout<<"Details of b3 are"<<endl;
    cout<<b3.getheight()<<endl;
    cout<<b3.getwidth()<<endl;
    cout<<b3.getlength()<<endl;
    return 0;
}