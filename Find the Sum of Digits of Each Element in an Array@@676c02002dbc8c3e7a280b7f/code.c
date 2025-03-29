#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<=n-1; i++){
        int sum=0;
        int lastdigit;
        while(arr[i]!=0){
            lastdigit=arr[i]%10;
            sum=sum+lastdigit;
            arr[i]=arr[i]/10;
            break;
        }
    printf("%d ",sum);
    }
    return 0;
}