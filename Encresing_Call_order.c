#include<stdio.h>
void decresing(int n){
    if (n==0) return;
    decresing(n-1);
    printf("%d\n",n);
    return ;
}
int main(){
    printf("Enter a Number: ");
    int n;
    scanf("%d",&n);
    decresing(n);

}