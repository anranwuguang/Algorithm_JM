//题目：输入3个数a,b,c，按大小顺序输出。
//
//程序分析：利用指针方法。

#include <stdio.h>


void swap(int *, int *);

int main(int argc, const char * argv[])
{
    int a, b, c;
    printf("请输入三个整数：");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        swap(&a, &b);
    }
    if(a>c)
    {
        swap(&a, &c);
    }
    if (b>c) {
        swap(&b, &c);
    }
    printf("从小到大的排序结果为: %d %d %d\n",a,b,c);
    return 0;
}

void swap(int *a, int *b)
{
    int t;
    t=*a; *a=*b; *b =t;
}
