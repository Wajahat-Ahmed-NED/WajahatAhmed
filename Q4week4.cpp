#include<iostream>
using namespace std;
int main(){
    cout<<"Let's make the table "<<endl;
    cout<<"Enter any number to calculate its table "<<endl;
    int a,b;
    cin>>a;
    cout<<"Enter the range of your table "<<endl;
    cin>>b;
    int *p1,*p2;
    p1=&a;p2=&b;
    for(int i=1;i<=*p2;++i){
        cout<<*p1<<"*"<<i<<"="<<*p1*i<<endl;
    }
    return 0;
}