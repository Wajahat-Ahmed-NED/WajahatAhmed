#include<iostream>
using namespace std;
class Restaurant{
    
    double Mealcost; 
    double Tax=300; 
    double Tip=Mealcost*0.15; 
    double Totalcost= Mealcost+Tax+Tip;
    double payment;
    double change;

    public:
        Restaurant(double cost):Mealcost(cost)
        {}
        void payment1(){
            cout<<"Receipt"<<endl;
                double pay;
                cout<<"Enter Payment amount "<<endl;
                cin>>pay;
                payment=pay;
                cout<<"Total cost "<<Totalcost<<endl;
                cout<<"Payment"<<payment<<endl;
                cout<<"Change is "<<payment-Totalcost<<endl;
                cout<<"Thank you for dining at Our Restaurant "<<endl;
            }
        void totalcost(){
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
    r1.totalcost();
    r1.payment1();
}