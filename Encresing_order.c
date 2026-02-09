#include<stdio.h>
void decresing(int x ,int n){
    if (x>n) return;
    printf("%d\n",x);
    decresing(x+1,n);
    return ;
}
int main(){
    printf("Enter a Number: ");
    int n;
    scanf("%d",&n);
    decresing(1,n);

}