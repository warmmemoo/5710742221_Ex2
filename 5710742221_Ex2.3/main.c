#include <stdio.h>

int main()
{
    int A;

    printf("Enter an integer : ");
    scanf("%d",&A);

    if ((A>40)&&(A<=100)){
        printf("True!!");
    }
    else{
        printf("False!!");
    }
    return 0;
}
