#include<stdio.h>
int main(){
    printf("Enter a Nauber: ");
    int n,fact=1;
    scanf("%d",&n);
    for (int i = 2; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    
    
    return 0;
}