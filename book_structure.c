#include<stdio.h>
struct book{
    char book_name[20];
    int price;
    char author_name[20];
}b[3];
int main()
{
   int i;
   for(i=0;i<3;i++)
   {
    printf("enter the book name, price and author name: ");
    scanf("%s%d%s",b[i].book_name,&b[i].price,b[i].author_name);
   }
   printf("Author whose book price greater than 1000 are: ");
   for(i=0;i<3;i++){
    if(b[i].price>1000)
    printf("%s\n",b[i].author_name);
   }
 
 
return 0;
}