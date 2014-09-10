#include <stdio.h>


int main()
{
    int A,B;
    printf("please enter base 10 number : ");
    scanf("%d",&A);
    printf("please select output base [8 or 16] : ");
    scanf("%d",&B);

    if ((A>=0)&&(B==8)){
        printf("%x",A);
    }
    if ((A>=0)&&(B==16)){
        printf("%o",A);
    }

    return 0;
}
