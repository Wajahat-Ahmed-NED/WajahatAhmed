#include<iostream>
using namespace std;
int main(){
    cout<<"Calculate the area of circle "<<endl;
    cout<<"Enter the value of radius "<<endl;
    float r;
    cin>>r;
    float pi=3.41;
    float *const p1=&pi;
    double area;
    area=*p1*r*r;
    cout<<"The area is found to be "<<area<<endl;
}