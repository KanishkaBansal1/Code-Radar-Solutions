#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int secondmax=INT_MIN;
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
