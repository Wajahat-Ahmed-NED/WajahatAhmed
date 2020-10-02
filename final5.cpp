#include<iostream>
using namespace std;
class box{
    double height,width,length;
    public:
    box(){};
    box(double b,double w,double l){
        height=b;
        width=w;
        length=l;
    }
    double volume(){
        return height*width*length;
    }
    box operator+(const box&b){
        box box;
        box.height=this->height+b.height;
        box.width=this->width+b.width;
        box.length=this->length+b.length;
        return box;

    }
    box operator-(const box&b){
        box box;
        box.height=this->height-b.height;
        box.width=this->width-b.width;
        box.length=this->length-b.length;
        return box;

    }
    box operator*(const box&b){
        box box;
        box.height=this->height*b.height;
        box.width=this->width*b.width;
        box.length=this->length*b.length;
        return box;
    }
    box operator/(const box&b){
        box box;
        box.height=this->height/b.height;
        box.width=this->width/b.width;
        box.length=this->length/b.length;
        return box;

    }
    void showdata(){
        cout<<"Height is "<<height<<endl;
        cout<<"Width is "<<width<<endl;
        cout<<"Length is "<<length<<endl;
    }

};
int main(){
    box b1(5.6,7.8,8.8);
    box b2(2.5,3.4,9.5);
    box b3;
    b3=b1+b2;
    // b3=b1-b2;
    // b3=b1*b2;
    // b3=b1/b2;
    cout<<"Details of b3 are"<<endl;
    b3.showdata();
    return 0;
}