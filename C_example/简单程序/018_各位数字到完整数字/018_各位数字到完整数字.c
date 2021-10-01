/*题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

程序分析：关键是计算出每一项的值。
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int  i,t, s=0, a, n;
    printf("请输入位数字和个数：");
    scanf("%d%d", &a, &n);
    for(i=0;i<n;i++)
    {
        s += (n-i)*a*pow(10, i);
    }
    printf("a+aa+... = %d， 其中a为%d， 项数为%d \n",s, a,n);
    return 0;
}
