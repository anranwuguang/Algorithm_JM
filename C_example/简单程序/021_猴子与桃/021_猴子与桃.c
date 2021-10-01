/*题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下 的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

程序分析：采取逆向思维的方法，从后往前推断。

 1. 设x1为前一天桃子数，设x2为第二天桃子数， 则：

    x2=x1/2-1, x1=(x2+1)*2

    x3=x2/2-1, x2=(x3+1)*2

    以此类推： x前=(x后+1)*2

 2. 从第10天可以类推到第1天，是一个循环过程。
*/

#include <stdio.h>

int main()
{
    int i, sum=1;
    for(i=1;i<10;i++)
    {
        sum += 1;
        sum *= 2;
    }
    printf("第一天一共摘了%d个桃子\n", sum);
    return 0;
}
