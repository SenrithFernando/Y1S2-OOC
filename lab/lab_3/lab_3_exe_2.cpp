//Write a program to input the marks a student for two assignments and find the final mark of each
//assignment according to the percentages given. In your program;

//1) Implement a function to find the contribution of each assignment mark sent to the function
//as parameters. In the function you should update two variables called CA1 and CA2, which
//are defined in the main program. The function heading is given below;
//void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);
//The final CA mark for each assignment is calculated as shown below;

//Assignment 1 20%
//Assignment 2 30%

//2) In the main program, input marks for 5 students and show the percentages of the marks
//using findMarks() function in a table as shown below. Format the output to 2 decimal
//places.


#include <iostream>
#include <iomanip>

using namespace std;

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2 );

struct marks{
    int t_marks1, t_marks2;
    int student;
    float t_CA1, t_CA2;
};

int main(){
    marks details[5];

    for(int i=0; i<5; i++){
        cout << "Enter mark of 1st Assignment for student " << i + 1 << ": " << endl;
        cin >> details[i].t_marks1;

        cout << "Enter mark of 2nd Assignment for student " << i + 1 << ": " << endl;
        cin >> details[i].t_marks2;

        cout << endl;

        details[i].student = i+1;

        //call the function
        findMarks(details[i].t_marks1, details[i].t_marks2, details[i].t_CA1, details[i].t_CA2);
    }

    cout << endl;

    cout << setw(10) << "student" << setw(10) << "Mark1" << setw(10) << "Mark2" << setw(10) << "CA 1" << setw(10) << "CA 2" << endl;

    for(int i=0; i<5; i++){
        cout << setw(10) << details[i].student << setw(10) << details[i].t_marks1 << setw(10) << details[i].t_marks2 << setw(10) << setiosflags(ios::fixed) << setprecision(2) << details[i].t_CA1 << setw(10) << details[i].t_CA2 << endl;
    }

    return 0;
}

//function implement
void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {
    // Calculate contribution of each assignment
    t_CA1 = t_marks1 * 0.2; // 20% weightage
    t_CA2 = t_marks2 * 0.3; // 30% weightage
}
