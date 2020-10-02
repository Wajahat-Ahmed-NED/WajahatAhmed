# include<iostream>
using namespace std;
void sum(int *p1,int *p2){
    int c[5]={0,0,0,0,0};
    int *sum;
    sum=c;
    
    for(int i=0;i<5;i++){
        *sum=*p1+*p2;
        cout<<"Sum is "<<*sum<<endl;
        p1++;
        p2++;
    
        
    }
       

    
}
int main(){
    int num1[5]={2,5,67,3,7};
    int num2[5]={1,5,76,3,7};
    int *p1,*p2;
    p1=num1;
    p2=num2;
    sum(p1,p2);
}