#include <iostream>

int main(void){
    double salary, netsalary;
    int etype, otHrs, otRate;

    //std::cout<<"Enter Empliyee type, salary, othours : ";
    //std::cin>>etype>>salary>>otHrs;

    std::cout<<"Enter Empliyee type : ";
    std::cin>>etype;

    std::cout<<"Enter salaray: ";
    std::cin>>salary;

    std::cout<<"Enter OtHours: ";
    std::cin>>otHrs;

    switch (etype){
        case 1:
            otRate=1000;
            break;
        case 2:
            otRate=1500;
            break;
        case 3:
            otRate=1700;
            break;
    }

    netsalary=salary+otHrs*otRate;
    std::cout<<"Newt slary is: "<<netsalary<<std::endl;

    return 0;

}
