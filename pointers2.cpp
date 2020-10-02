#include<iostream>
#include<conio.h>
using namespace std;
int sum(int *p1,int *p2){
    int result;
    result=*p1+*p2;
    return result;
}
int main(){
    int num1,num2;
    int *pt1,*pt2;
    cout<<"Enter num1"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    pt1=&num1;
    pt2=&num2;
    cout<<"The sum of both the numbers are"<<sum(&num1,&num2)<<endl;
    _getch();
    return 0;
}