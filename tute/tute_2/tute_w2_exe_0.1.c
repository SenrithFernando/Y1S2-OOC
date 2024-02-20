#include <stdio.h>

int main(void){
    float cm , inches;

    printf("Enter a length in cm : ");
    scanf("%f",&cm);

    inches=cm/2.54;

    printf("Length is inches is %f \n", inches);

    return 0;
}
