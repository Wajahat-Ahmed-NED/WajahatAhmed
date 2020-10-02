#include <iostream>

using namespace std;

class publication
{protected:
    string title;
    float price;
   public:
       publication(string t,float p):title(t), price(p)
       {
       };
       void getData()
       {
           cout<<"Enter title of publication"<<endl;
           cin>>title;
           cout<<"Enter price "<<endl;
           cin>>price;
       }
       void putData()
       {
           cout<<"Title of book is "<<title<<endl;
           cout<<"Price  is"<<price <<endl;
       }
};
class book: public publication
{
private:
    int pagecount;
public:
    book(string t,float p):publication(t,p)
    {

    }
    void getData(int pc)
    {
        pagecount = pc;
    }
    void putData()
    {
        cout << "Book name: " << title << endl;
        cout<<"Total pages are "<<pagecount<<endl;
        cout << "Book price: " << price << endl;

    }
};

class tape:public publication
{
private:
    float playingtime;
public:
    tape(string t,float p):publication(t,p)
    {

    }
    void getData(float pt)
    {
       playingtime=pt;
    }
    void putData()
    {
        cout << "Dvd name is: " << title << endl;
        cout<<"Playing time is "<<playingtime<<endl;
        cout << "Dvd price is: " << price << endl;
    }
};

int main() {
    cout << "Name : Wajahat Ahmed" << endl;
    cout << "Rollno: SE-038" << endl << endl;
    cout << "Book Details:" << endl;
    book b1("Shawshank", 500);
    b1.getData(500);
    b1.putData();
    cout << "Dvd Details:" << endl;

    tape dvd1("Hello World!", 250);
    dvd1.getData(300);
    dvd1.putData();

}