#include<stdio.h>
#include<math.h>
int main()
{
    char s1[20],s2[20];
    int i,j;
    printf("enter two strings: \n");
    scanf("%s%s",s1,s2);

    i=strlen(s1);
   

   for(j=0;s2[j]!='\0';i++,j++ )
   {
        s1[i]=s2[j];
   }
   s1[i]='\0';
   printf("Concadinate string is: %s",s1);

 
 
return 0;
}