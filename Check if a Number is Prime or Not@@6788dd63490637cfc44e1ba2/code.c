#include <stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    if(x==1){
        printf("Not Prime");
    }
    else{
        for(i=2;i*i<=n; i++){
            if(n%i==0){
                printf("Not Prime");
                break;
            }
        }
        if(i*i >n){
            printf("Prime");
        }
    }