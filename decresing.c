#include<stdio.h>
void greeting(int n){
    if (n==0) return;
    printf("Good Morning Rj Ankit\n");
    greeting(n-1);
    return ;
}
int main(){
    printf("Enter a Number: ");
    int n;
    scanf("%d",&n);
    greeting(n);

}