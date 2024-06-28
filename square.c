#include<stdio.h>
#include<math.h>
int fact(int);
float power(float,int);
int main()
{
    printf("enter the value of x\n");
    float x,result;
    int n;
    scanf("%f",&x);
    printf("\n Enter the value of n\n");
    scanf("%d",&n);
printf("%d",fact(n));
printf("%.2f",power(x,n));
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return(n*fact(n-1));

}
float power(float x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else 
    return x*power(x,n-1);
}