//Write a program to calculate the amount to be paid for a rented vehicle.

#include <stdio.h>

int main(void){
    float distance, l_dis, paid;

    printf("Enter the distance in km : ");
    scanf("%f",&distance);

    if(distance <= 30){
        paid = distance*50;
    }else{
        l_dis = distance-30;
        paid = l_dis*40 + 50*30;
    }

    printf("Distance : %.2f\n",distance);
    printf("Paid amount : %.2f",paid);

    return 0;

}
