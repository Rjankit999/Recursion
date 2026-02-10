/*Ques : Make a function which calculates 'a'
raised to the power 'b' using recursion.*/
#include <stdio.h>
int power(int n, int pow)
{
    if (pow==0) return 1;
    return n*power(n,pow-1);    

}
int main()
{
    int n, pow;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Enter a Power: ");
    scanf("%d", &pow);
    printf("%d",power(n,pow));
    return 0;
}