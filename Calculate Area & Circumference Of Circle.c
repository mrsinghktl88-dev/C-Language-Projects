// C Program To Find Area And Circumference Of A Circle
// Here "a" Stands For Area
// "c" Stands For Circumference 
// And "r" stands for Radius


#include <stdio.h>
int main()
{
float r, a ,c;
printf("Area And Circumference Of Circle Calculator \n\n");
printf("Enter The Radius Of A Circle :");
scanf("%f", &r);
a = 3.14 * r * r;
printf("Area Of The Circle With Radius %.1f Unit Is : %.2f Unit \n\n", r, a);
c = 2 * 3.14 * r;
printf("Circumference Of The Circle With Radius %.1f Unit Is : %.2f Square Unit", r, c);

return 0;
}