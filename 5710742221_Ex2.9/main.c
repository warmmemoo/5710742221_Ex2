#include <stdio.h>

void main()
{
    int X,Y;

    printf("please enter coordinate x y : ");
    scanf("%d%d",&X,&Y);

    if ((X>0)&&(Y>0)){
         printf("Q1",X,Y);
    }if ((X<0)&&(Y>0)){
         printf("Q2",X,Y);
    }if ((X<0)&&(Y<0)){
         printf("Q3",X,Y);
    }if ((X>0)&&(Y<0)){
         printf("Q4",X,Y);
    }if ((X==0)&&(Y==0)){
         printf("Origin",X,Y);
    }

    return 0;
}
