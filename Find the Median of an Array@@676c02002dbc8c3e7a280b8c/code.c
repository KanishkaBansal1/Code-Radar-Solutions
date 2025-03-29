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
            median=n/2;
        }
        else{
            median=(n/2 + (n/2+1))/2;
        }
    }
    printf("%d",arr[median]);
    return 0;
}