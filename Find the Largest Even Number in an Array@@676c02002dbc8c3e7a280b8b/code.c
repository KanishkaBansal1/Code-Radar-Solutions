#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr);
    }
    int max=INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]%2!=0){
        printf("-1");
    }
        if(arr[i]>max && arr[i]%2==0){
            arr[i]=max;
        }
    }
    printf("%d",max);
    
}