#include <stdio.h>
int isprime(arr[i]){
    if(arr[i]<2) return 0;
    for(int i=2; i*i<=arr[i]; i++){
        if(arr[i]%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0; i<=n-1; i++){
        if(isprime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}