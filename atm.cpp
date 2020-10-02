#include<iostream>
using namespace std;
class ATM{
    long accountno;
    string name;
    double balance;
    public:
    ATM(){};
    ATM(long a,string n,double b){
        accountno=a;
        name=n;
        balance=b;
    } 
    void setname(string a){
        name=a;
    }
    string getname(){
        return name;
    }
    void setbalance(double a){
        balance=a;
    }
    double getbalance(){
        return balance;
    }
    void setaccountno(long a){
        accountno=a;
    }
    long getaccontno(){
        return accountno;
    }
    double credit(double amount){
        balance+=amount;
        return balance;
    }
    double debit(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            return balance;
        }
    }
    void showdata()
    {
        cout<<"Account no. is "<<accountno<<endl;
        cout<<"Name of account holder is "<<name<<endl;
        cout<<"Balance is found to be "<<balance;
    }

};
int main(){
    ATM myatm(10,"Wajahat Ahmed",600000000);
    myatm.showdata();
    cout<<endl;
    myatm.credit(23000000);
    myatm.showdata();
    cout<<endl;
    int am;
    cout<<"Credit you want "<<endl;
    cin>>am;
    cout<<"Going to credit new balance is "<<myatm.credit(am)<<endl;
    
    int am2;
    cout<<"Debit you want "<<endl;
    cin>>am2;
    cout<<"Going to Debit new balance is "<<myatm.debit(am2)<<endl;
    cout<<endl<<"Enter new account number ";
    long a;
    cin>>a;
    myatm.setaccountno(a);
    cout<<endl<<"Enter new account holder name ";
    string n;
    cin>>n;
    myatm.setname(n);
    cout<<endl<<"Enter new balance ";
    double d;
    cin>>d;
    myatm.setbalance(d);
    myatm.showdata();
    return 0;
}