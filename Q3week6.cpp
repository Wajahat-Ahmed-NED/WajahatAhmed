#include<iostream>
using namespace std;
class Stdaccount{
    public:
    string ID;
    string name;
    double balance=2000.00;
    public:
    Stdaccount(){};
    Stdaccount(string id,string nam){
        ID=id;
        name=nam;
    }
    void showdata(){
        cout<<"ID "<<ID<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Balance is "<<balance<<endl;
    }
    void setbal(double b){
        balance=b;
    }
};
class Restaurant:public Stdaccount{
    public:
    double Mealcost; 
    double Tax=Mealcost*0.06; 
    double Tip=Mealcost*0.15; 
    double Totalcost= Mealcost+Tax+Tip;
    double payment=Stdaccount::balance;
    double change;
    
    public:
        
        Restaurant(double cost):Mealcost(cost)
        {};
        void payment1(){
            cout<<"Charge the meal to Ahmed's Account "<<endl;
            cout<<"Receipt"<<endl;
               
                cout<<"Total cost "<<Totalcost<<endl;
                cout<<"Payment"<<Stdaccount::balance<<endl;
                cout<<"Change is "<<payment-Totalcost<<endl;
                cout<<"Thank you for dining at Our Restaurant "<<endl;
                
            }
        
        void totalcost(){
            cout<<"Account holder bill is "<<Totalcost<<endl;
            cout<<"Bill"<<endl;
            cout<<"Meal cost is "<<Mealcost<<endl;
            cout<<"Tax is "<<Tax<<endl;
            cout<<"Tip is "<<Tip<<endl;
            cout<<"Total cost is "<<Totalcost<<endl;
            
        } 
        void showdata(){
            cout<<"Meal Cost "<<Mealcost <<endl; 
            cout<<"Tax is "<<Tax <<endl; 
            cout<<"Tip is "<<Tip <<endl; 
            cout<<"Total cost"<<Totalcost <<endl;
            cout<<"Payment"<<payment<<endl;
            cout<<"Change is "<<change<<endl;
        }
        void setTax(double ta){
            Tax=ta;
        }
};

int main(){
    Restaurant r1(1500);
    cout<<"Amount of Ahmed's Bill is" << endl;
    cout<<r1.Totalcost<<endl;
    r1.totalcost();
    r1.payment1();
    Stdaccount Ahmeds("A210-BCS-06","Ahmed");
    cout<<"Current status of Ahmed's account "<<endl;
    Ahmeds.setbal(r1.change);
    Ahmeds.showdata();

}