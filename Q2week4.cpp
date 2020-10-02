#include <iostream>
using namespace std;
void sum(int *p1,int *p2){
    int c[5];
    int *sum;
    sum=c;
    for (int i=0;i<5;i++){
        *sum=*p1+*p2;/* by default list ki pehli value lekr aenge
        or sum ma c ki empty list hogi jo hr iteration pr auto increment
        hogi or phir hm p1 or p2 ko khud increment denge*/
        
        cout<<"The sum of "<<i<<" element is "<<*sum<<endl;
        p1++;
        p2++;

    }
}
int main(){
    int arr1[]={23,45,64,32,75};
    int arr2[]={45,786,88,89,67};
    int *p1,*p2;
    p1=arr1;
    p2=arr2;
    sum(p1,p2);
    return 0;

}