#include <stdio.h>
// 函数：计算整数数组的和
void calculationSum(int *arr, int size, int *result){ 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i]; 
        *result = sum;
    }
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum; //只限于local variable上面要重新声明

    //定义指向整数数组的二级指针
    int *ptr = array;
    int **pptr = &ptr;

    //调用函数计算数组和
    calculationSum(*pptr,size,&sum);

    //打印计算得到的和
    printf("Sum of the array: %d\n", sum);

    return 0;

}