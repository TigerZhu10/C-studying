#include <stdio.h>
#include <ctype.h>
#include <string.h>

int sum(int a1[], int a2[], int a3[], int size){
    int i;

    for(i = 0; i < size; i++){
        a3[i] = a1[i] + a2[i];
    }
}

int main(void){

      

    int a[7] = {-2, 5, -1, 6, -4, -8, 6};
    int max = a[0], sum2 = 0;

    int x;
    for(x = 0; x < 7; x++){
        sum2 += a[x];
        if(sum2 > max){
            max = sum2;
        }
        else if(sum2 < 0){
            sum2 = 0;
        }
    }

    printf("最大数组之和是：%d\n", max);

    int a1 [4] = {2,4,6,8};
    int a2 [4] = {1,0,3,6};
    int a3 [4];


    sum(a1,a2,a3,4);

    int i = 0;
    for(i=0; i<4; i++){
        printf("%d\t", a3[i]);
    }
    printf("\n");

    char str[4] = {'a', 'l', 'e', 'x'}; 
    //把alex设置成大写：
    for(int i = 0; i < 4; i++){
        str[i] = toupper(str[i]);
    }

    //打印出ALEX:
    printf("uppercase string: %s\n", str);

    //sizeof得出来的单位是byte不是bit
    printf("%d byte\n", sizeof(int));

    int ar2[] = {1,2,3,4,5,6};
    //不优雅：
    printf("%d \n", sizeof(ar2) / sizeof(int));

    //优雅：
    printf("%d \n", sizeof(ar2) / sizeof(ar2[0]));

    char ch1 = 20;

    char ch2 = ch1 + 'a';

    printf("%c\n", ch2);
    printf("%d\n", ch2);

    char ch3 = 'a';
    char ch4 = 97;
    char ch5 = 0x61;

    printf("%c\n", ch3);
    printf("%c\n", ch4);
    printf("%c\n", ch5);


    //计算s1的长度（单位是byte）
    char s1[] = "abcd";

    //剩下来的1 byte是从'\0'来的（结果是5 byte）
    int len = sizeof(s1) / sizeof(s1[0]);
    printf("%d byte ()\n", len);

    //得用这种方法解决（使用strlen）
    printf("%d byte\n", strlen(s1));


    //'\0'后面的内容不计算在大小里面（包括\0）
    char s2[] = "ab\0cd";
    printf("%d byte (s2的长度)\n", strlen(s2));


    char Hello[] = "Hello World!";
    Hello[0] = 'A';
    printf("%s\n", Hello);
    
    int length = 0;

    while(Hello[length] != '\0'){
        length++;
    }

    printf("string length: %d\n", length);
    
 

    return 0;

}     