// C Program To Find The Product Of Two Matrix
//3x3 Matrix Multiplication Program:
//a[3][3], b[3][3] -> Do 3x3 matrices (user se input liye gaye elements)
// c[3][3]          -> Result matrix jisme a aur b ka product store hota hai
// i, j             -> Row (0 se 2) aur column (0 se 2) index ke liye nested loop counters


#include <stdio.h>
int main()
{
int a[3][3], b[3][3], c[3][3], i, j, k;
printf("Enter The Value Of First Matrix \n");
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("Value Of [%d] [%d] : ", i, j);
        scanf("%d", &a[i][j]);
    }
}

printf("\n Enter The Value Of Second Matrix \n");
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("Value of [%d] [%d] : ", i, j);
        scanf("%d", &b[i][j]);
    }
}

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    c[i][j] = 0;
    for(k=0; k<3; k++)
        {
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}

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