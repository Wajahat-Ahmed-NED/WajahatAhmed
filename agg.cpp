# include<iostream>
using namespace std;
class chair{

};
class table{

};
class classroom{
    chair *cha[20];
    table *tb[2];
    int chairno;
    int tno;
    public:
    classroom(){
        for (int i=0;i<20;i++){
            cha[i]=NULL;
        }
        for (int i=0;i<20;i++){
            tb[i]=NULL;
        }
        
        chairno=0;
        tno=0;
    }
        void addchair(chair *ch,int cno){
            if (cno>0 && cno<=20){
                cha[cno]=ch;
            }
        }
        chair* getchair(int cno){
            if (cno>0 && cno<=20){
                return cha[cno];
            }
            else{
                return NULL;
            }
        }
        void addtable(table *t,int tno){
            tb[tno]=t;
        }
        table* gettable(int tno){
            return tb[tno];
        }
};
int main(){
    chair ch[20];
    table tb[2];
    classroom c1;
    for (int i=1;i<=20;i++){
        c1.addchair(&ch[i],i);
        cout<<"Chair "<<i<<" is placed at "<<c1.getchair(i)<<endl;
    }
    for (int i=1;i<=2;i++){
        c1.addtable(&tb[i],i);
        cout<<"Table "<<i<<" is placed at "<<c1.gettable(i)<<endl;
    }
}