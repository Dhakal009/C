#include<stdio.h>
int main()
{
    char string[11]="Programming";
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<11;j++)
        {
            if(j<i+0 && j>11-i)
            {
                printf("%c",string[i]);
            }
        }
        printf("\n");
        
    }
 
 
return 0;
}