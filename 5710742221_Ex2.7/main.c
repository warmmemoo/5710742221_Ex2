#include <stdio.h>

void main()
{
    int x;
    char grade;

    printf("please enter score : ");
    scanf("%d",&x);

    if (x >= 80){
        grade = 'A';
    }else if (x >= 70){
        grade = 'B';
    }else if (x >= 60){
        grade = 'C';
    }else if (x >= 50){
        grade = 'D';
    }else{
        grade = 'F';
    }
    printf("your grade : %c\n",grade);

    return 0;
}
