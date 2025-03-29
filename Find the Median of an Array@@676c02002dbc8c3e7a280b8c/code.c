#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int median;
    for(int i=0; i<=n-1; i++){
        if(n%2!=0){
            median=arr[n/2];
        }
        else{
            median=(arr[n/2]+arr[(n+1)/2])/2;
        }
    }
    printf("%d",median);
    return 0;
}