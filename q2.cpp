#include<iostream>
#include<math.h>
using namespace std;
class triangle{
    protected:
    double base;
    double altitude;
    double angle;
    public:
    triangle(){};
    triangle(double a,double ang){
        base=a;
        angle=ang;
    }
    
    triangle(double b,double a,double ang){
        base=b;
        altitude=a;
        angle=a;
    } 
    double getbase(){
        return base;
    }
    void setbase(double b){
        base=b;
    }
    double getaltitude(){
        return altitude;
    }
    void setaltitue(double b){
        altitude=b;
    }
    double getangle(){
        return angle;
    }
    void setangle(double b){
        angle=b;
    }
    virtual double area(){
        return base*altitude/2;
    }
};
class isoceles:public triangle{
    isoceles(int a,double ang):triangle(a,ang)
    {
        altitude=a;
    }
    virtual double area(){
        return base*altitude/2;
    }

};
class rightangle:public triangle{
    public:
    rightangle(int a,int b){
        angle=90;
        base=a;
        altitude=b;
    }
    virtual double area(){
        return base*altitude/2;
    }
};
class Equilateral:public triangle{
    public:
    Equilateral(int a){
        base=a;altitude=a;
        angle=60;
    }
    virtual double area(){
        return sqrt(3)*base*base/4;
    }
    double parameter(){
        return 3*base;
    }
};
int main(){
    cout<<"Name:Wajahat Ahmed"<<endl;
    cout<<"RollNo SE-038"<<endl;
    Equilateral e1(5);
    cout<<"Area is"<<e1.area()<<endl;
    cout<<"Parameter is "<<e1.parameter();
}