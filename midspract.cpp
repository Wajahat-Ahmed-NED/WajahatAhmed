#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int wdcount=1;int chcount=0;char ch='a';
    cout<<"enter any phrase"<<endl;
    while((ch=_getch())!='\r'){
        if (ch==' '){
            wdcount++;
        }
        else
        {
            chcount++;
        }
        
    }
    cout<<wdcount<<"\t"<<chcount<<endl;
    
}