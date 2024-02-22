#include <iostream>
//#include <stdio.h>
//for microsoft visual studio


int main() {
    int no,out;
    printf("Enter the number : ");
    scanf("%d",&no);
    //scanf_s("%d",&no);
    //for microsoft visual studio

    for(int i=1; i<=12; i++){
        out=i*no;
        printf("%d x %d = %d\n",no,i,out);

    }

    return 0;
}




