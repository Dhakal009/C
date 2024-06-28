#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a 1st complex number: ");
    scanf("%d%d",&a,&b);
    printf("Enter a 2nd complex number: ");
    scanf("%d%d",&c,&d);

    printf("Sum of complex number is %d + i%d.",(a+c),(b+d));
 
 
return 0;
}