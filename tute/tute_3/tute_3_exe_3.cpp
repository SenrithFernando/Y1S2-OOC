#include <iostream>
using namespace std;

void print(int len, int wth);
//void input(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() {
 int length = 10, width = 5;
 input(length, width);
 print(length, width);
 return 0;
}



// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len
 << ", Width : " << wth << endl;
}

// Implement the Input Function here
void input(int &len, int &wth){

    cout << "Enter length : ";
    cin >> wth;
    cout << "Enter width : ";
    cin >> len;


}




//-------other---------

//value type parameter
    //if you change the parameter value it will not be affective to other
    //void input(int length, int width);

//reference type parameter
    //void input(int &length, int &width);
