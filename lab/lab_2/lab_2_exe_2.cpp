#include <iostream>
using namespace std;
// int area(int length, int width);

struct Rectangle
{
    int length;
    int height;
};

float area(Rectangle r);

int main(void)
{
    struct Rectangle r1;
    struct Rectangle r2;

    int Yar, Ywid, Har, Hwid;

    std::cout << "Enter Width of yard : ";
    std::cin >> r1.length;

    std::cout << "Enter Width of yard : ";
    std::cin >> r1.height;

    std::cout << "Enter Width of house : ";
    std::cin >> r2.length;

    std::cout << "Enter Width of house : ";
    std::cin >> r2.height;

    // std::cout << area(Ywid,Yar)- area(Har,Hwid) << endl;
    std::cout << "Area of green color : ";
    std::cout << area(r1) - area(r2) << endl;
}

float area(Rectangle r)
{

    return r.length * r.height;
}
