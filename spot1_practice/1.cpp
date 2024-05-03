#include <iostream>
using namespace std;

class Course{
private:
    int courseID;
    string courseName;
    int creditPoints;

public:
    void setCourseDetails(int cid, string cname);
    void displayCourseDetails();
    void setCreaditPoints(int cpoints);
};

void Course::setCourseDetails(int cid, string cname){
    courseID = cid;
    courseName = cname;
}

void Course::setCreaditPoints(int cpoints){
    creditPoints =  cpoints;

    cout << "Input new " << courseName << " credit points : ";
    cin >> creditPoints;
}

void Course::displayCourseDetails(){
    cout << "Course ID = " << courseID << endl;
    cout << "Course Name = " << courseName << endl;
    cout << "Credit Points = " << creditPoints << endl;
}

int main(void){
    Course c1, c2, c3, c4;

    c1.setCourseDetails(1050,"OOC");
    c2.setCourseDetails(1060,"SPM");
    c3.setCourseDetails(1100,"IWT");
    c4.setCourseDetails(1090,"ISDM");

    c1.setCreaditPoints(2);
    c2.setCreaditPoints(3);
    c3.setCreaditPoints(4);
    c4.setCreaditPoints(4);

    cout << endl;
    c1.displayCourseDetails();
    cout << endl;
    c2.displayCourseDetails();
    cout << endl;
    c3.displayCourseDetails();
    cout << endl;
    c4.displayCourseDetails();

    return 0;
}
