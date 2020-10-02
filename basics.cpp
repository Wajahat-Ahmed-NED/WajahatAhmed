#include<iostream>
using namespace std;
int main(){
    int num; int fact=1;
    cout<<"Please enter number"<<endl;
    cin>>num;
    if (num==0 || num==1)
        fact=1;
    else
        for(int count=1;count<=num;count++){
            fact=fact*count;
        }
    cout<<fact<<endl;
    return 0;
}