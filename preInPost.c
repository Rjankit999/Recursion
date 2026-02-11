#include<stdio.h>
void PreInPost(int n){
    if (n==0) return;
    printf("This is Pre %d\n",n);
    PreInPost(n-1);
    printf("This is in %d\n",n);
    PreInPost(n-1);
    printf("This is post %d\n",n);
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    PreInPost(n);
    return 0;
}