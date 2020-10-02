#include <iostream>
#include<string>
using namespace std;

class Links {
public:
    string linkname;
    Links() {
        cout << "Links default constructor" << endl;
    };
    Links(string y) {
        linkname=y;
        cout << "Links parameterized constructor having name: " << linkname << endl;
    };

};

class WebPage {
public:
    double width, height;

    WebPage() {
        cout << "WebPage default constructor" << endl;
    };
    WebPage(double w, double h) {
        width = w;
        height = h;
        cout << "WebPage parameterized constructor having width and height as: " << width << ", " << height << endl;
    };

    Links l1;
    Links l2{"www.goanything.com"};

};

class WebSite {
private:
    string name;
public:
    WebSite() {
        cout << "WebSite default constructor" << endl;
    };
    WebSite(string w) {
        name=w;
        cout << "WebSite parameterized constructor having name: " << name << endl;
    };

    WebPage wpage1;
    WebPage wpage2 {640, 800};
    WebPage wpage3 {400, 600};
    WebPage wpage4 {1280, 720};

};


int main()
{
    WebSite wb0;

    return 0;
}
