#include <stdio.h>

int main()
{
    int X;

    printf("Enter integer number : ");
    scanf("%d",&X);


    if (((X%2)&&(X%3))==0){
        printf("%d is divisible.",X);
    }
    else{
        printf("Not divisible!!",X);
    }

    return 0;
}
