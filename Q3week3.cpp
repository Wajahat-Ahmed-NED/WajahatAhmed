#include<iostream>
using namespace std;
struct StudentRecord{
    char stdfname[20];
    char stdlname[20];
    double stdscore=85.4;
};
StudentRecord getdata(StudentRecord std1){
    cout<<"Student first name is "<<endl;
    cin.get(std1.stdfname,20);
    cout<<"Student last name is "<<endl;
    cin>>std1.stdlname;
    cout<<"Student score is "<<endl;
    cin>>std1.stdscore;
    return std1;
}
int main(){
    StudentRecord std={"wajahat","Ahmed",88.3};
    cout<<std.stdfname<<endl<<std.stdlname<<endl<<std.stdscore<<endl;
    StudentRecord std2=getdata(std);
    cout<<std2.stdfname<<endl<<std2.stdlname<<endl<<std2.stdscore<<endl;
    cout<<std.stdfname<<endl<<std.stdlname<<endl<<std.stdscore<<endl;
    return 0;
}