//题目：学习使用按位取反~。



#include <stdio.h>

int main(int argc, const char * argv[])
{
    short int a,b;
        a=1;
        b=~a;
        printf("a 的按位取反值为（十进制）%d \n", b);
        a=~a;
        printf("a 的按位取反值为（十六进制） %x \n",a);
    return 0;
}

