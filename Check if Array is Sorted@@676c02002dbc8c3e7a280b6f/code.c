#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]<=arr[i+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
    return 0;
}