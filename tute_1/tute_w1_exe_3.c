// Write a C program to calculate the sum of the numbers from 1 to n. Where n is a keyboard input.

#include <stdio.h>

int main(void){
    int number , x, sum;

    printf("Enter the Number calculate for sum : ");
    scanf("%d",&number);

    for(x=1; x<=number; x++){
        sum = sum + x;
    }

    printf("Sum : %d",sum);

    return 0;
}
