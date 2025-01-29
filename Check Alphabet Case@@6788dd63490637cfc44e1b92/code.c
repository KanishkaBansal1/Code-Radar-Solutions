#include <stdio.h>
int main(){
    char ha;
    scanf("%c",&ha);
    if(isupper(ha)){
        printf("Uppercase");
    }
    else if(islower(ha)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
