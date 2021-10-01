//题目：将一个数组逆序输出。


#include <stdio.h>
#define N 10
int main(int argc, const char * argv[])
{
    int i,t, a[N]={0,1,2,3,4,5,6,7,8,9};
    
    printf("原始的数组为：");
    for (i=0; i<N; i++) {
        printf("%4d",a[i]);
    }
    printf("\n");
    
    for(i=0;i<N/2;i++)
    {
        t=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=t;
    }
    
    printf("逆序的数组为：");
    for (i=0; i<N; i++) {
        printf("%4d",a[i]);
    }
    printf("\n");
    
    return 0;
}
