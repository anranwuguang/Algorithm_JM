//题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

#include <stdio.h>
#define N 20

int main(int argc, const char * argv[])
{
    int n;
    float a[N];
    void input_array(float * s, int n);
    void output_array(float * s,int n);
    void fs_max(float * s, int n);
    printf("请输入数组长度(小于%d):",N);
    scanf("%d", &n);
    input_array(a,n);
    fs_max(a,n);
    output_array(a,n);
    return 0;
}
//fs_max 查找数组中的最大值并与第一个元素交换
void fs_max(float * s, int n)
{
    
    
    float * max=s,* p=s;
    float temp;
    while (n--) {
        if (*max<*p)
            max=p;
        p++;
    }
    p=s;
    temp=*max;*max=*p;*p=temp;
}
void input_array(float * s, int n)
{
    
    float * t=s;
    printf("请输入数组元素:");
    while (n--) {
        scanf("%f", t++);
    }
}
void output_array(float * s,int n)
{
    float * t=s;
    printf("数组内容为:");
    while (n--) {
        printf("%6.1f", *t);
        t++;
    }
    printf("\n");
}
