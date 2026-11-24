// C Program To Find The Greatest Of Three Numbers
// Here "a", "b", "c" Are The First Second And Third Numbers Respectively

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("Enter Third Number : ");
    scanf("%d", &c);

    if (a > b && a > c) 
    {
        printf("%d Is The Greatest Number", a);
    } 
    else if (b > a && b > c) 
    {
        printf("%d Is The Greatest Number", b);
    }
    else 
    {
        printf("%d Is The Greatest Number", c);
    }

    return 0;
}