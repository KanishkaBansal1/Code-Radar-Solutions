#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]+arr[j]==target && arr[i]==arr[j]){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
        }
    }
    return 0;
}