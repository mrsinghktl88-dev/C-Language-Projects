//Program to Calculate the Sum of Positive Numbers
// Until a Sentinel Value (999) is Entered


#include <stdio.h>
int main()
{
int n, sum=0;
printf("Program to Calculate the Sum of Positive Numbers Until a Sentinel Value (999) is Entered\n\n");

while(1)
{
printf("Enter Any Number : ");
scanf("%d", &n);
if(n == 999)
    break;
if(n>0)
    sum = sum+n;
}
printf("Sum Of All Positive Number You Entered Is %d", sum);
return 0;

}