#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",arr[i]);
    }
    int min=INT_MAX;
    int secondmin=INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]<secondmin && arr[i]>min){
            secondmin=arr[i];
        }
    }
    printf("%d",secondmin);
    return 0;
}