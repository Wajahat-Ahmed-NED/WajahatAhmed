#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *const ptr=&a;//is constant pointer

    const int a1=5;
    const int *ptr1=&a1;//non constant pointer but will not change value

    int a2=5;
    const int *const ptr2=&a2;

    int a3=5;
    const int *ptr3=&a3;
    
}