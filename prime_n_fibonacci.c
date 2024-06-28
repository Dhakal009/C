#include<stdio.h>
int fibo(int n)
{
    if (n<=1)
    return n;
    else
    return fibo(n-1)+fibo(n-2);

}

int prime(int f)
{
    int i,flag=0;
    for(i=2;i<f;i++)
    {
        if(f%i==0)
        {
            return flag=1;
            break;
        }
    }

}
int main()
{
  int n,f,flag=0;
  printf("enter the nth term: ");
  scanf("%d",&n);
  f=fibo(n);  
  flag=prime(f);
  if(flag==0)
  printf("prime");
  else
  printf("not prime");
 
return 0;
}