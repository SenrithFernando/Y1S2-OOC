#include <iostream>
//#include <stdio.h>
//for microsoft visual studio

Square(int x);
Cube(int x);

int main() {
    int no; out;

    printf("Enter number : ");
    scanf("%d",&no);
    //scanf_s("%d",&no);
    //for microsoft visual studio

    printf("%d\n",Square(no));
    printf("%d\n",Cube(no));

    return 0;
}

Square(int x){
    return x*x;
}

Cube(int x){
    return x*x*x;
}



