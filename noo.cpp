#include <iostream>
using namespace std;

class Publications {};
class Staff {};
class Library {
private:
    Staff* staff[15];
    Publications* publications[20];
    string publishDate;
    int staffId;
public:
    Library() {
        for(int i = 0; i < 15; i++) {
            staff[i] = NULL;
        }
        for(int i = 0; i < 15; i++) {
            publications[i] = NULL;
        }
    };
    void addStaff(Staff *stf, int staffId) {
        if (staffId >= 0 && staffId <= 15) {
            staff[staffId] = stf;
        }

    }
    Staff* getStaff(int staffId) {
        if (staffId >=0 && staffId <=15) {
            return staff[staffId];
        }
        else {
            return NULL;
        }
    }
    void setStaffId(int id) {
        staffId = id;
    }
    int getStaffId() {
        return staffId;
    }
    void addPublications(Publications *pub, int pubNo) {
        if (pubNo >= 0 && pubNo <= 20) {
            publications[pubNo] = pub;
        }

    }
    Publications* getPublications(int pubNo) {
        if (pubNo >=0 && pubNo <=20) {
            return publications[pubNo];
        }
        else {
            return NULL;
        }
    }
    void setPublishDate(string date) {
        publishDate = date;
    }
    string getPublishDate() {
        return publishDate;
    }


};

int main() {
    cout << "Name: Wajahat Ahmed" << endl;
    cout << "Rollno: SE-038" << endl << endl;

    Staff s[15];
    Publications p[20];
    Library l1;
    for (int i = 0; i <= 15; i ++) {
        l1.addStaff(&s[i], i);
        cout << "Staff with staffID: " << i << " added!" << endl;
    }
    cout << endl;
    for (int i = 0; i <= 20; i ++) {
        l1.addPublications(&p[i], i);
        cout << "Publication with pubNo: " << i << " added!" << endl;
    }

    return 0;


}