#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0; i<=n-1; i++){
        int original = arr[i];
        int remainder=0;
        int reverse=0;
        while(arr[i]!=0){
            remainder=arr[i]%10;
            reverse= reverse*10 +remainder;
            arr[i]=arr[i]/10;
        }
        if(original==reverse){
            count++;
        }
        if(arr[i]<0){
            return 0;
        }
    }
    printf("%d",count);
    return 0;
}
