#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *pt1;
    pt1=&a;
    cout<<&a<<endl;//will give address
    cout<<*pt1<<endl;
    cout<<pt1<<endl;

    int b=20;
    *pt1=50;
    cout<<a<<endl;
    cout<<*pt1<<endl;
    cout<<pt1<<endl;

    float arr[5]={3.5,5.3,6.4,6.3,6.2};
    float *pt2;
    cout<<"address of arr is"<<endl;
    for(int i=0;i<5;i++){
        cout<<"arr ["<<i<<"]="<<&arr[i]<<endl;
    }
   

    }