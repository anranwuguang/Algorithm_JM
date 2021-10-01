//将数组前m个数字移动到到数组最后的位置

#include <stdio.h>
#define N 20

int main(int argc, const char * argv[])
{
    int n, m;
    float a[N];
    void input_array(float * s, int n);
    void output_array(float * s,int n);
    void move_array(float * s, int n, int m);
    
//输入数组
    printf("请输入数组长度(小于%d)：",N);
    scanf("%d", &n);
    printf("请输入滚动的距离(小于%d)：",N);
    scanf("%d", &m);
    input_array(a,n);
//滚动shu
    move_array(a,n,m);
    output_array(a,n);
    return 0;
}

void move_array(float * s, int n, int m)
{
    int i;
    float * star=s,* p=s;
    float temp;
    while(m--)
    {
        p = star;
        temp=*p;
        for(i=1;i<n;i++)
        {
            *p=*(p+1);
            p++;
        }
        *p=temp;
    }
    
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
