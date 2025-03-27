#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int secondmax=arr[0];
    for(int i=0; i<=n-1; i++){
        if(arr[i]>secondmax && secondmax<max){
            secondmax=arr[i];
        }
    }
    printf("%d",secondmax);
    return 0;
}