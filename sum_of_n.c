/*W A P to print sum 1 to n (Piramitter)*/
#include<stdio.h>
void sum(int n,int s){
    if (n==0){
        return 1;
    } 
    sum(n-1,s+n);
}
int main(){
    printf("Enter a NUmber: ");
    int n;
    scanf("%d",&n);
    sum(n,0);
    return 0;
}