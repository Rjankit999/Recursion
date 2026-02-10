#include<stdio.h>
void recorstion(int x){
    if (x==0 )
    return;
    printf("%d\n",x);
    recorstion(x-1);
    printf("%d\n",x);

}
int main(){
    printf("Enter a NUmber: ");
    int n;
    scanf("%d",&n);
    recorstion(n);
    return 0;
}