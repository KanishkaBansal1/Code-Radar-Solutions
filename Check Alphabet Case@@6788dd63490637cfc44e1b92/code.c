#include <stdio.h>
int main(){ 
    char ch;
    scanf("%c",&ch);
    if(ch==isupper(ch)){
        printf("Uppercase");}
    
    else if(ch==islower(ch)){
        printf("Lowercase");}
    
    else{
        printf("Not an alphabet");
    }
    return 0;
}
    
