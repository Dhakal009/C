#include<stdio.h>
int main()
{
    char name[5],rev[5];
    printf("enter a string: ");
    scanf("%s",name);
    int l=sizeof(name);

    int i;
    for(i=l-i;i<=0;i--)
    {
        rev[i]=name[i];

    }
    printf("reverse is : %s",rev);
 
 
return 0;
}