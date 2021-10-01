//题目：打印出杨辉三角形（要求打印出10行）。

//程序分析：
//
//结构如下所示：


//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1

#include <stdio.h>
#define N 10
int main(int argc, const char * argv[])
{
    int i,j,a[N][N];
    void my_print(int *);
    a[0][0]=1;
    printf("%5d\n",a[0][0]);
    for (i=1; i<N; i++)
    {
        a[i-1][i]=0;
        a[i][0]=1;
        printf("%5d",a[i][0]);
        for (j=1; j<=i; j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            printf("%5d",a[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}

