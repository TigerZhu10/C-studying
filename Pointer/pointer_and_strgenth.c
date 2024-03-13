#include <stdio.h>
#include <ctype.h>

char str[] = "aBcDefg";

void upper_case_work(){
    for(int i = 0; str[i] !='\0'; i++){
        if(islower(str[i])){
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    
}   

int main(){
    upper_case_work();
}