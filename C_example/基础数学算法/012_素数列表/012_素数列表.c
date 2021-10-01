/*题目：判断1到200之间的素数。

程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,r=1;
    for (i=2; i<200; i++)
    {
        r=1;
        k=sqrt(i);
        for(j=2;j<=k;j++)
        {
            if (i%j==0) {
                r=0;
                break;
            }
        }
        if(r) printf("%d 是素数\n", i);
    }
    return 0;
}
