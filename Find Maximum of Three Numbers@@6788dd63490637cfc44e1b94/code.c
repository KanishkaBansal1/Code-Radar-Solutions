#include <stdio.h>
#include <maths.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=fmax(a,b,c);
    printf("%d",max);
    return 0;
}
