#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int index=-1;
    int flag= false;
    for(int i=0; i<=n-1; i++){
        if(arr[i]==target){
           flag=true;
           index=i;
           break;
        }
    }
    if(flag==true){
        printf("%d",index);
    }
    else{
        printf("-1");
    }
    return 0;
}