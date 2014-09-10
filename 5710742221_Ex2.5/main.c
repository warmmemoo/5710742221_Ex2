#include <stdio.h>

int main()
{
    int x,y,z,i;
    printf("Enter positive number : ");
    scanf("%d%d",&x,&y);

    z=x-y;
    i=y-x;

    if(z>0){
        printf("|x-y| = %d",z);
    }if(i>0){
        printf("|y-x| = %d",i);
    }
    return 0;
}
