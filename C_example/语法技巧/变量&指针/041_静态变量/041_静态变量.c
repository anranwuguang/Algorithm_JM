//题目：学习static定义静态变量的用法。

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    void fun(void);
    for (i=0; i<3; i++) {
        fun();
    }
    return 0;
}
void fun(void)
{
    int i=0;
    static int static_i=0;
    printf("i=%d\n",i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;
}
