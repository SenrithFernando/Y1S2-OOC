//Write a C program to input marks of two subjects. Calculate and print the average of the two marks.

#include <stdio.h>

int main (void){
    int mark1, mark2, sum;
    float avg;

    printf("Input mark 1 : ");
    scanf("%d",&mark1);

    printf("Input mark 2 : ");
    scanf("%d",&mark2);

    sum = mark1 + mark2;
    avg = sum/2.0;

    printf("Sum of Subject : %d\n",sum);
    printf("Avg of subject : %.2f",avg);

    return 0;


}
