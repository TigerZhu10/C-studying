#include <stdio.h>

int main(){
    int arr[5] = {1,3000,5,7,9};

    int *ptr = arr;

    // printf("%d\n", (*ptr++)*2);
    // printf("%d\n", (*ptr++)*2);
    // printf("%d\n", (*ptr++)*2);
    // printf("%d\n", (*ptr++)*2);
    // printf("%d\n", (*ptr)*2);

    for(int i = 0; i < 5; ++i){
        *ptr = (*ptr) * 2;
         ptr++;
    }

    printf("Doubled array: {");
    for (int i = 0; i < 5; ++i){
        printf("%d", arr[i]);
        if(i < 4){
            printf(",");
        }
    }
    printf("}\n");

    return 0;

}