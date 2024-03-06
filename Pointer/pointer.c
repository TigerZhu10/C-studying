 #include <stdio.h>

 void getString(char**p){
   *p = "hello world";
 }
 //这个是错误的解法：
 void swap1(int x, int y){
   int temp = 0;
   temp = x;
   x = y; 
   y = temp;
 } 
 //这个是用指针正确的解法：
 void swap2(int *ptr_1, int *ptr_2){
   int temp = 0;
   temp = *ptr_1;
   *ptr_1 = *ptr_2;
   *ptr_2 = temp;
   
 }
 


 void main(){
   char *str = NULL;
   getString(&str);
   printf("%s\n",str);

    //取址符：&
    //int是32 bit
    int b =100;
    printf("b的值是:%d\n",b);
    printf("b的地址是: %p\n",&b);//%p：打印地址; &b：获取b的地址；
     
    //Char是8 bit
    char a = 't';
    printf("a的值是:  %c\n",a);
    printf("b的地址是: %p\n",&a);

    int age = 12;
    int *pr = &age;
    printf("age的地址: %p\n",&age);
    printf("指针的地址: %p\n",pr);
    printf("age修改前为: %d\n",age);
    *pr = 100;
    printf("age被指针修改后为: %d\n",age);


   int dataSize = 1000;
   printf("int的size 是: %d bytes\n",sizeof(int));//sizeof 得出的是int的大小（以byte为单位）
   printf("dataSize的size 是: %d bytes\n",sizeof(dataSize));//sizeof 得出的是dataSize的大小（以byte为单位）

   char charSize = 10;
   printf("char的size 是: %d bytes\n",sizeof(char));//sizeof 得出的是char的大小（以byte为单位）
   printf("charSize的size 是: %d bytes\n",sizeof(charSize));//sizeof 得出的是charSize的大小（以byte为单位）

   printf("以下打印出不同指针类型的大小：\n");
   printf("%d\n",sizeof(char*));
   printf("%d\n",sizeof(short*));
   printf("%d\n",sizeof(double*));
   printf("%d\n",sizeof(long*));
   printf("%d\n",sizeof(float*));

   int AGE = 12;
   int *PR = &AGE;
   int **PR3 = &PR;
   **PR3 = 100;
   printf("pr3的值是%d\n",AGE);

   int num_1 = 100;
   int num_2 = 200;
   
   swap1(num_1, num_2);
   printf("num_1: %d num_2: %d\n",num_1,num_2);

   swap2(&num_1, &num_2);
   printf("num_1: %d num_2: %d\n",num_1,num_2);

   int c = 10;
   int *p_a = &c;
   int **p_pa = &p_a;

   printf("c的地址是: %p , c的值是: %d\n",&c, c);
   printf("p_a的地址是: %p , p_a的值是: %p\n",&p_a, p_a);
   printf("p_pa的地址是: %p , p_pa的值是: %p\n",&p_pa, p_pa);
   printf("*p_a的解引用是: %d\n", *p_a);
   printf("*p_pa的解引用是: %p\n", *p_pa);
   printf("**p_pa的解引用是: %d\n", **p_pa);

   *p_a = 20;
   printf("*p_a的解引用是: %d\n", *p_a);
   printf("*p_pa的解引用是: %p\n", *p_pa);
   printf("**p_pa的解引用是: %d\n", **p_pa);

   
   
   
 }

