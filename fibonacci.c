/**Multiple Calls
Ques : Write a function to calculate the nth
fibonacci number using recursion.*/
#include <stdio.h>
int fib(int n)
{
if (n<=2) return 1;

   return(fib(n-1)+fib(n-2));
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("%d",fib(n));
    return 0;
}