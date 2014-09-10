#include <stdio.h>

int main()
{
    int x,y,total;

    printf("please enter midterm final : ");
    scanf("%d%d",&x,&y);

    total = x+y;
    if(total >= 60){
        printf("passed with score %d",total);
    }else{
        printf("failed with score %d",total);
    }
    return 0;
}
