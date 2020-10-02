#include<iostream>
using namespace std;
class Chair{

};
class Table{
   
};
class Classroom{
    int chairno;
    Chair *ch[20];
    Table *t;
    public:
    Classroom(){
        for(int i=0;i<=20;i++){
            ch[i]=NULL;
        }
        t=NULL;
        chairno=0;
    }
    void addchair(Chair *ch,int chairno){
        if (chairno >=0 && chairno<=20){
            this->ch[chairno]=ch;
        }
    }
    Chair* getchair(int chairno){
        if (chairno>=0&&chairno<=20){
            return ch[chairno];
        }
    }
     void addtable(Table *t1){
        t=t1;
    }
    Table* gettable(){
        return t;
    }
};
int main(){
    Chair c[20];//part ka object bane ga pehle
    Table table1;
    Classroom c1;
    for(int i=0;i<=20;i++){
        c1.addchair(&c[i],i);
        cout<<"Chair no "<<i<<"placed at: "<<c1.getchair(i);
        cout<<endl;
    }
    c1.addtable(&table1);
    cout<<"Location of table is "<<c1.gettable()<<endl;
    return 0;
} 
