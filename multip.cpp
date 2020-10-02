#include <iostream>
using namespace std;
class tollBooth {
private:
 unsigned int totalCars;
 double totalMoney;
public:
 tollBooth() {
 totalCars = 0;
 totalMoney = 0;
 };
 void payingCar() {
 totalCars += 1;
 totalMoney += 0.50;
 }
 void nopayCar() {
 totalCars += 1;
 }
 void display () {
 cout << "The total number of cars are: " << totalCars << endl;
 cout << "The total amount of money is: " << totalMoney << endl;
 }
};
int main()
{
 cout << "Name: wajahat ahmed roll no. 38" << endl;
 
 int x;
 tollBooth tb1;
 for (int i = 0; i < 5; i++) {
 cout << "Enter car type? 1 for Paying or 2 for No-Paying? ";
 cin >> x;
 switch (x) {
 case 1:
 tb1.payingCar();
 break;
 case 2:
 tb1.nopayCar();
 break;
 }
 }
 tb1.display();
 return 0;
}