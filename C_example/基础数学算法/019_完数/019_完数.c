/*题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
*/

#include <stdio.h>
#define N 1000
int main()
{
    int i, j, k=0, sum, a[23];
    for(i=2;i<=N/2+1;i++)
    {
        k=0;
        sum = a[k++] = 1;
        for (j=2; j<i; j++)
        {
            if(i%j==0)
            {
                a[k++] = j;
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d = %d", sum, a[0]);
            for(j=1;j<k;j++)
            {
                printf("+ %d ", a[j]);
                
            }
            printf("\n");
        }
        
    }
    return 0;
}
