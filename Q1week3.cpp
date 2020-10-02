#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a,b;
    double c,d;
    char comma;
    char parentheses;
    cout<<"Enter the firt coordinate in (a,b) form "<<endl;
    cin>>parentheses>>a>>comma>>b>>parentheses;
    cout<<"Enter the second coordinate in (a,b) form "<<endl;
    cin>>parentheses>>c>>comma>>d>>parentheses;
    double distance;
    distance=(c-a)*(c-a)+(d-b)*(d-b);
    cout<<"The distance between two points is "<<sqrt(distance)<<endl;
    return 0;
}