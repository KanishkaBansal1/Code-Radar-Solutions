#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-1);j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");    
    }
    for(int l=1; l<=(n-1); l++){
        for(int m=1; m<=l; m++){
            printf(" ");
        }
        for(int o=1; o<=(2*l-1); o++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}