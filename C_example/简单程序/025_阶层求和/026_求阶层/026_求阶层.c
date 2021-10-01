//题目：利用递归方法求0~5的阶层。

#include <stdio.h>
#define N 5
int main()
{
    int i, s=1;
    int fact(int);
    for(i=0;i<=5;i++)
    {
        s=fact(i);
        printf("%d ! = %d \n",i ,s);
    }
    return 0;
}

int fact(int j)
{
    int sum;
    if(j==0)
        sum=1;
    else
        sum=j*fact(j-1);
    return sum;
}
