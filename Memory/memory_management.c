#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Use this for memset

int main(){
    int *p = malloc(sizeof(int));//申请一个大小为sizeof int的堆内存
    if (p == NULL) {
        // Handle memory allocation failure
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    memset(p, 0, sizeof(int)); //将刚刚申请的内存清零 -  p是告诉你要清理哪一块的内存 -  0是告诉你内存里全是0（等同于清空） -  明确申请的大小是多少（4）
    *p = 100;//将100放入p指向的内存中
    free(p);//释放内存

    int *k = calloc(3, sizeof(int));//申请3个连续的sizeof (int) 大小的内存
    k[0] = 1;
    k[1] = 10;
    k[2] = 100;

    free(k);
}
