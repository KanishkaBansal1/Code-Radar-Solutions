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
        int remainder;
        int reverse=0;
        while(arr[i]!=0){
            remainder=arr[i]%10;
            reverse= reverse*10 +remainder;
            num=num/10;
        }
        if(arr[i]==reverse){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}