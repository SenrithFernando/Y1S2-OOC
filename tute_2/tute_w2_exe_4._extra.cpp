#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    cout<<setw(25)<<25.12<<endl;

    cout<<setprecision(3)<<25.124567<<endl;

    cout<<setiosflags(ios::fixed)<<setprecision(4)<<25.12347<<endl;
}





