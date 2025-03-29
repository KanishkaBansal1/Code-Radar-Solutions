#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    bool flag =true;
    for(int i=0; i<=n-1; i++){
        if(arr[i]%2==0){
            if(arr[i]>max){
            max=arr[i];
            flag =true;
        }
        }
    }
    if(flag==true){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
    return 0;
}