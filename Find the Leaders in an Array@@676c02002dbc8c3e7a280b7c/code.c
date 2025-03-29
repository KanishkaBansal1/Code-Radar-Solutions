#include <stdio.h>
void findleaders(int arr[], int n){
    for(int i=n-2; i>=0; i--){
        if(arr[i]>last){
            last=arr[i];
            printf("%d ",last);
        }
    }
    int last=arr[n-1];
    printf("%d",arr[n-1]);
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    findleaders(arr,n);
    return 0;
}