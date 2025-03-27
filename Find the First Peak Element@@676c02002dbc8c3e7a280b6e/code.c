#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d\n",&arr[i]);
    }
    int max=arr[0];
    for(int i=0; i<=n-1; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        printf("%d",max);
    }
    return 0;
}