#include <stdio.h>

int sum(int a1[], int a2[], int a3[], int size){
    int i;

    for(i = 0; i < size; i++){
        a3[i] = a1[i] + a2[i];
    }
}

int main(void){

    int a[7] = {-2, 5, -1, 6, -4, -8, 6};

    int answer_1 = a[0] + a[1] + a[2];

    int answer_2 = a[1] + a[2] + a[3];

    int answer_3 = a[2] + a[3] + a[4];

    int answer_4 = a[3] + a[4] + a[5];

    int answer_5 = a[4] + a[5] + a[6];

    int p1 =  answer_2 + answer_3 + answer_4 + answer_5;
    int p2 =  answer_1 + answer_3 + answer_4 + answer_5;
    int p3 =  answer_1 + answer_2 + answer_4 + answer_5;
    int p4 =  answer_1 + answer_2 + answer_3 + answer_5;
    int p5 =  answer_1 + answer_2 + answer_3 + answer_4;

    



    if(answer_1 > p1){
        printf("%d\t", )
    }


    int a1 [4] = {2,4,6,8};
    int a2 [4] = {1,0,3,6};
    int a3 [4];


    sum(a1,a2,a3,4);

    int i = 0;
    for(i=0; i<4; i++){
        printf("%d\t", a3[i]);
    }
    printf("\n");
    return 0;
}