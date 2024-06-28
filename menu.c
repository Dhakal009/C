#include<stdio.h>
void odd_even(int n);
void positivee(int n);
void fact(int n);


int main()
{
    int num;
    char choice[1];
    do{
    choice[0]='\0';

    printf("\n A for odd or even \n 'B' for +ve and -ve \n 'C' for factorial and \n 'D' for Exit program: ");
    scanf("%s",&choice[0]);
    if(choice[0]!='D'){
    printf("enter a number : ");
    scanf("%d",&num);
    }
    switch(choice[0])
    {

        case 'A': odd_even(num);
                    break;
        case 'B':positivee(num);
                    break;
        case 'C':fact(num);
                    break;
        case 'D':printf("exiting program...!!");
                    break;
        default: printf("Invalid input..");
                break;
    }
    }while(choice[0]!='D');
 
 
return 0;
}
void odd_even(int n)
{
    if(n%2==0)
    printf("even");
    else
    printf("odd");

}
void fact(int num){
    int i,factt=1;
    for(i=1;i<=num;i++)
    {
        factt=factt*i;
    }
    printf("Factorail is %d",factt);
}
void positivee(int num){
    if(num>0)
    printf("Positive..");
    else
    printf("negative..");
}