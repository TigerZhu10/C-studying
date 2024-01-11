#include <stdio.h>

int sum(){
    
}

int main(void){

    int a1 [4] = {2,4,6,8};
    int a2 [4] = {1,0,3,6};
    int a3 [4];

    sum(a1,a2,a3);

    int i = 0;
    for(i=0; i<4; i++){
        printf("%d\t", a3[i]);
    }
    printf("\n");
    return 0;
}