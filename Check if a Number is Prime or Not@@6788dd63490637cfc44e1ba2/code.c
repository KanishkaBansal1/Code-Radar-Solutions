#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i=2,x>=i*i,i++){
        if(x%i!=0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}
