#include <stdio.h>
void zigzag(int n)
{
    if (n == 0)
        return;
    printf("%2d", n);
    zigzag(n - 1);
    printf("%2d", n);
    zigzag(n - 1);
    printf("%2d", n);
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}