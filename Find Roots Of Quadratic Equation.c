// Quadratic Equation Roots Program (ax^2 + bx + c = 0):
// a, b, c       -> Equation ke coefficients (user se input)
// d              -> Discriminant (b^2 - 4ac), jo roots ka nature batata hai
// root1, root2  -> Equation ke do solutions/roots
// Logic         -> Agar a == 0 toh quadratic nahi; warna d ke hisab se real & equal (d == 0),
//                 real & distinct (d > 0), ya imaginary (d < 0) roots nikalta hai.
 
 
#include <stdio.h>
#include <math.h>

int main()
{
float a, b , c, d, root1, root2, real, image;

printf("Enter The Value Of 'A' Form Your Quadratic Equation : ");
scanf("%f", &a);

printf("Enter The Value Of 'B' Form Your Quadratic Equation : ");
scanf("%f", &b);

printf("Enter The Value Of 'C' Form Your Quadratic Equation : ");
scanf("%f", &c);

if(a == 0)
{
    printf("Not A Quadratic Equation");
    return 0;
}

d = b * b - 4 * a * c;

if(d == 0)
{
    printf("Roots Are Equal And Real\n");
    root1 = -b / (2 * a);
    root2 = -b / (2 * a);
    printf("First Roots Is %.2f\n", root1);
    printf("Second Roots Is %.2f", root2);
}

else if(d > 0)
{
    printf("Roots Are Real And Distinct\n");
    root1 = ((-b) + sqrt(d)) / (2 * a);
    root2 = ((-b) - sqrt(d)) / (2 * a);
    printf("First Roots Is %.2f\n", root1);
    printf("Second Roots Is %.2f", root2);
}

else
{
    printf("Real Roots Don't Exists\n");
    printf("Roots Are Imaginary\n");
    real = (-b) / (2 * a);
    image = (sqrt(-d)) / (2 * a);
    printf("Roots Are Are %.2f + %.2fi And %.2f - %.2fi", real, image, real, image);
}


return 0;
}