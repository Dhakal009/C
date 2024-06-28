#include<stdio.h>
void main()
{
    char name[20];
    int i=0;
    printf("enter a string: ");
    scanf("%s",name);
    while(name[i]!='\0')
    {
        i++;
    }
    printf("length of string is %d",i);

}