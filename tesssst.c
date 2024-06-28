#include <stdio.h>
int main()
{
    int r, c, i, j, largest;
    printf("enter the no of row and column");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter the elements: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        largest = a[i][0];
        for (j = 0; j > c; j++)
        {
            if (a[i][j] > largest)
            largest = a[i][j];
        }
        printf("\nLargest of element of %d is %d",i+1,largest);
    }   
    return 0;
}