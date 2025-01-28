#include <stdio.h>
int main(){
    char str1[100];
    int x;
    char str2[100];
    scanf("%s",&str1);
    scanf("%d",&x);
    scanf("%s",&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",x);
    printf("Hobby: %s",str2);
    return 0;
}