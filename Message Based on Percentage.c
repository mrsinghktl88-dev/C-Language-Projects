// Program to Display Grade or Message Based on Percentage

#include <stdio.h>
int main() {
    float percentage;

    printf("Enter Your Percentage : ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100)
    {
        printf("Invalid Percentage! Please Enter A Valid Value Between 0 And 100.\n");
    }
    else if (percentage >= 90)
    {
        printf("Outstanding! \n");
    }
    else if (percentage >= 75)
    {
        printf("Very Good! \n");
    } 
    else if (percentage >= 60)
    {
        printf("Good! \n");
    } 
    else if (percentage >= 50)
    {
        printf("Satisfisfactory! \n");
    } 
    else if (percentage >= 33) 
    {
        printf("Pass! Work Hard Next Time. \n");
    } 
    else 
    {
        printf("Fail! Better Luck Next Time.\n");
    }

    return 0;
}