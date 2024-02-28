#include <iostream>
using namespace std;
int volume(int height, int width, int length);
//define a structure called Box
//have the integer data types height, width, length;
struct box{
    int height, width, length;
}box1,box2;

//Do not change the main function
int main() {

//struct box box1,box2;

//create a variable called box 1 of the box structure type int box1Height, box1Width, box1Length;
  box1.height, box1.width, box1.length;
//create a variable called box 2 of the box structure type int box2Height, box2Width, box2Length;
  box2.height, box2.width, box2.length;

 int totalVolume, totalSurface;

 //input the height , width, length of box1 and box2
 cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.length;

 cout << "\nEnter Box 2 Height : ";
 cin >> box2.height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.length;

 //Replace the coding below to pass the box type structure
 totalVolume = volume(box1.height, box1.width, box1.length)+ volume(box2.height, box2.width, box2.length);

 cout << "\nVolume of Box is " << totalVolume << endl;

 return 0;
}

int volume(int height, int width, int length){
    return height * width * length;
}
