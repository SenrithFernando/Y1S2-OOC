#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

 cout << setw(5)<<"No"<<setw(10) << "Name" <<setw(9)<< "Marks" << endl;

 for (int r = 0; r < 5; r++) {
     cout<< setw(5)<< r+1<< setw(10)
     << names[r] <<setw(9)
     << marks[r] << endl;
 }


//cout<<setw(5), setprecision(15), setiosflags(ios::fixed);
//cout<<setiosflags(ios::fixed)<<setprecision(15)<<setw(5)<<25.12347<<endl;
}

//cout<<setw(25)<<25.12<<endl;

//cout<<setprecision(3)<<25.124567<<endl;

