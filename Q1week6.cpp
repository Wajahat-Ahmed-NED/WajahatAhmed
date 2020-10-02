#include<iostream>
using namespace std;
class Rectangle{
    int height;
    int width;
    public:
    Rectangle(int h,int w){
        height=h;
        width=w;
    }
    int getheight(){
        return height;
    }
    void setheight(int h){
        height=h;
    }
    int getwidth(){
        return width;
    }
    void setwidth(int w){
        width=w;
    }
    double area(){
        return height*width;
    }
    void showdata(){
        cout<<"Height is "<<height<<" Width is "<<width;
    }
};

class Dormroom{
    int roomno;
    int roomcount;
    double roomcost;
    public:
    Dormroom(int rno,int rcount){
        roomno=rno;
        roomcount=rcount;
        if (roomcount==2){
            roomcost=2700;
        }
        else{
            roomcost=3500;
        }
    }
    int getroomno(){
        return roomno;
    }
    int getroomcount(){
        return roomcount;
    }
    double getroomcost(){
        return roomcost;
    }
    void setroomcost(int h){
        roomcount=h;
        if (roomcount==2){
            roomcost=2700;
        }
        else{
            roomcost=3500;
        }
    }
};
int main(){
    Rectangle r1(2,6);
    Dormroom d1(3,9);
}