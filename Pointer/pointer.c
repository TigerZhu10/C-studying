 #include <stdio.h>

 void main(){

    //取址符：&
    //int是32 bit
    int b =100;
    printf("b的值是:%d\n",b);
    printf("b的地址是: %p\n",&b);//%p：打印地址; &b：获取b的地址；
     
    //Char是8 bit
    char a = 't';
    printf("a的值是:%c\n",a);
    printf("b的地址是: %p\n",&a);

    int age = 12;
    int *pr = &age;
    printf("age的地址: %p\n",&age);
    printf("指针的地址: %p\n",pr);
    printf("age修改前为: %d\n ",age);
    *pr = 100;
    printf("age被指针修改后为: %d",age);

 }