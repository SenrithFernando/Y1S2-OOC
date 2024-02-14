#include <iostream>

int main(void){
    int no;
    long fac;

    std::cout<<"Enter Number: ";
    std::cin>>no;

    fac=1;
    for(int r=no; r>=1; r--){
        fac=fac*r;
    }

    std::cout<<"FActorial of "<<no<<" is : "<<fac<< std::endl;

    return 0;
}
