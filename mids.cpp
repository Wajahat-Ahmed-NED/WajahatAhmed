#include<iostream>
using namespace std;
class ToolBooth{
    private:
    int noofcars;int payingcar;int nopaycar;
    double cash;
    public:
    ToolBooth()
    {};
    void payingcar(){
        noofcars++;
        payingcar++;
        cash+=0.5;
        cout<< 'The paying cars are'<<payingcar<<endl;
    }
    void nopaycar(){
        noofcars++;
        nopaycar++;
        cout<<'No pay cars are'<<nopaycar<<endl;
    }
    void display(){
        cout<<'The total cash is'<<cash<<endl;
        cout<<'Total cars are found to be'<<noofcars<<endl;
    }
};
int main(){
    cout<<"Wajahat Ahmed with roll no.19038"<<endl;
    ToolBooth t1;
    t1.display();
    t1.nopaycar();
    t1.payingcar();
    

}