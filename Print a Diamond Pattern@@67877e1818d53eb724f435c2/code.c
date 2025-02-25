#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=(2*n)-1; i++){
        for(int j=1; j<=(2*n)-1; j++){
            if(i==n || j==n || i==(n-1) && j==(n-1) || i==(n+1) && j==(n+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}