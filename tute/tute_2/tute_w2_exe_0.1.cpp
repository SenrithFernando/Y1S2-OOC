#include <iostream>

int main(){
    float cm ,inches;

    //printf("Enter a length in cm : ");
    //scanf("%f",&cm);
    std::cout<<"Enter a length in cm : ";
    std::cin>>cm;

    inches=cm/2.54;

    //printf("Length is inches is %f \n", inches);
    std::cout <<"Length in inches is "<<inches<<std::endl;

    return 0;
}
