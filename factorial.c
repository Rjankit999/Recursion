#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    printf("Enter a Nauber: ");
    int n;
    scanf("%d", &n);
    
    printf("%d",factorial(n));
     return 0;
}