// C Pragram To Find The Sum Of Two Matrix

#include <stdio.h>
int main()
{
int a[3][3], b[3][3], c[3][3], i, j;

printf("Enter The Value Of First Matrix \n");

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("Value of [%d] [%d] : ", i, j);
        scanf("%d", &a[i][j]);
    }
}

printf("\nEnter The Value Of Eecond Matrix\n");

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("Value Of [%d] [%d] : ", i, j);
        scanf("%d", &b[i][j]);
    }
}

// For Loop For Addition Of Two Matrices 

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
        c[i][j] = a[i][j] + b[i][j];
}

// For Loop For Printing Final Answer 

printf("\nSum of Two Matrix Is :::\n");
printf("\n");

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("%d \t", c[i][j]);
    }
    printf("\n");
}
return 0;
}