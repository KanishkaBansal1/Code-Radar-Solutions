#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        printf("%d x i = %d",n,n*i);
    }
    printf("\n");
    return 0;
}