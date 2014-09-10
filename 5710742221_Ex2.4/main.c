#include "stdio.h"
#include "conio.h"
#include "string.h"
const n=3;
int main(){
int i,j,nam[n],tmp;
char key;
for(i=0; i<n; i++)
      {
             printf("Enter Namber [%d]:",i+1);  scanf("%d",&nam[i]);
      }

 printf("\nData in Array Before Sort : ");
 for(i=0;i<n;i++)
      {
             printf("%3d",nam[i]);
      }
for(i=0;i<n-1;i++)
       for(j=0;j<n-1;j++)
             {
                        {
                               if(nam[j]<nam[j+1])
                                    {
                                            tmp=nam[j];
                                            nam[j]=nam[j+1];
                                            nam[j+1]=tmp;
                                     }
                        }
             }
printf("\nData in Array After  Sort : ");
for(j=0;j<n;j++)
          {
                printf("%3d",nam[j]);
          }
return 0;
}
