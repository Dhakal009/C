#include<stdio.h>
int main()
{
    int i,j;
    char string[5]="NePaL";
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j>=5-i && j<=5+i)
            {
                printf("%c",string[i]);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
 
 
return 0;
}