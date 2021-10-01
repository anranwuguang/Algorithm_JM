/*题目：打印出如下图案（菱形）。

   *
  ***
 *****
*******
 *****
  ***
   *
程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重for循环，第一层控制行，第二层控制列。
*/

#include <stdio.h>
#define N 7
int main()
{
    int i, j, t;   //t为关于i的分段函数， t=i-1, t< =N/2+1; t=N-i, t>N/2+1
    for(i=1;i<=N;i++)
    {
        if(i<=N/2)
            t=i-1;
        else if(i>N/2)
            t=N-i;
        for(j=1;j<=N;j++)
        {
            if((N/2+1-t) <= j &&j<=(N/2+1+t)) //N/2+1 为每行的中心列的序号，行列编号从1开始
                printf("%c",'*');
            else
                printf("%c",' ');
        }
        printf("\n");
    }
    return 0;
}
