#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]==arr[j]){
                printf("-1");
                break;
            }
        }
    }
    int max=arr[0];
    int secondmax=arr[0];
    for(int i=0; i<=n-1; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]>secondmax && arr[i]<max){
            secondmax=arr[i];
        }
    }
    printf("%d",secondmax);
    return 0;
}
