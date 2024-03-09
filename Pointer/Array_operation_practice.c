#include <stdio.h>

int main(){
    int arr[5] = {1,3,5,7,9};

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

    int arr1[10];
    printf("arr1的地址是: %p\n", arr1);

    printf("arr1的地址是: %p\n", &arr1[0]);


    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};

    int *prt = &arr2[9];
    for(int i = 0;i < 5;i++){
        printf("%d\n",*prt);
        prt = prt - 2;
    }


    return 0;

}