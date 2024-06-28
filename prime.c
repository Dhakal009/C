#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==1)
    printf("1 is not prime neither composite.");
    else{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
 
 
    if(flag==0)
    printf("Prime hey mya.....");
    else
    printf("Prime nahi hey rey myaa...");
    }
return 0;
}