#include <iostream>
//#include <stdio.h>
//for microsoft visual studio

int main() {
    float no, out;
    printf("Enter the number : ");
    scanf("%f", &no);
    // scanf_s("%f", &no);
    //for microsoft visual studio

    out=no/2.54;

    printf("In inces : %.2f",out);

    return 0;
}



