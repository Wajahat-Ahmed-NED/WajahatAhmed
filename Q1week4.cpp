#include<iostream>
using namespace std;
int factorial(int *p){
    int fact=1;
    if (*p==0 || *p==1){
        return fact;
    }
    else if (*p>0)
    {
        for (int i=1;i<=*p;i++){
            fact*=i;
        }
        return fact;
    }
    else
    {
        return 0;
    }
    
}
int main(){
    int num;
    cout<<"Enter the number to calculate its factorial "<<endl;
    cin>> num;
    int *p1;
    p1=&num;
    cout<<"The Factorial is found to be "<<factorial(p1)<<endl;
    return 0;
}