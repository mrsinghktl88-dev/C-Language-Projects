// C Pragram To Fibd The Sum Of Two Matrix
//3x3 Matrix Addition Program:
//a[3][3], b[3][3] -> Do 3x3 matrices (user se input liye gaye elements)
// c[3][3]          -> Result matrix jisme a aur b ka sum store hota hai
// i, j             -> Row (0 se 2) aur column (0 se 2) index ke liye nested loop counters
//Logic            -> Har position [i][j] ke corresponding elements ko add karke c[i][j] mein store kiya gaya hai.

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