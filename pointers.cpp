#include<iostream>
#include<conio.h>
using namespace std;
// will tell pointers
int main(){
    int a=10;
    int *pt1;
    pt1=&a;
    cout<<&a<<endl;
    cout<<*pt1<<endl;
    cout<<pt1<<endl;
    a=20;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*pt1<<endl;
    cout<<pt1<<endl;
    float arr[5]={23,4,3,2,5};
    float *pt2;
    cout<<"Adress of arr is";
    for(int i=0;i<5;i++){
        cout<<"\n arr["<<i<<"]="<<&arr[i]<<endl;
    }
    pt2=arr;
    for(int i=0;i<5;i++){
        cout<<"\n arr["<<i<<"]="<<pt2+i<<endl;
    }
    return 0;
}
