#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    printf("enter string 1st : ");
    scanf("%s",str1);
    printf("\nenter secind string: ");
    scanf("%s",str2);

    int i=0;
    while(str1[i]!='\0' && str1[i]==str2[i])
    {
        i++;
    }

    if(str1[i]==str2[i])
    {
        printf("string 1 and 2 are equal.");
    }

    else if(str1[i]>str2[i])
    {
        printf("string 1 is greater.");
    }
    else{
        printf("string 2 is greater.");
    }
}