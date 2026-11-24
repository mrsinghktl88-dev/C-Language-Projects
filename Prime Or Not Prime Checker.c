// C Program To Check Whether The Number Is Prime Or Not

// n     -> User se liya gaya number jise check karna hai
// i     -> Loop counter (1 se n tak chal kar n ko divide karta hai)
// count -> n ke total factors/divisors ki ginti (0 se start)
// Logic -> Agar n sirf 2 numbers (1 aur khud n) se poora divide hota hai (remainder 0),
//          toh count == 2 hoga aur number Prime hai; warna Not Prime.

#include <stdio.h>
int main()
{
    int i, n, count = 0;
    printf("Check Whether The Number Is Prime Or Not\n\n");
    printf("Enter A Number :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
        count++;
        }
    }
    if(count == 2)
    {
    printf("%d Is Prime Number", n);
    }
    else
    printf("%d Is Not Prime Number", n);
    
    return 0;
}