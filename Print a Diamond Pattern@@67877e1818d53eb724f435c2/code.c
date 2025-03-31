#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        if(i<=n){
        nsp--;
        nst++;
       }
        if(i>n){
        nsp++;
        nst--;
    }
    printf("\n");
    }
    return 0;
}