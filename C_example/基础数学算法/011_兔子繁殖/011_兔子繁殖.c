/*题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。
*/

#include <stdio.h>

int main()
{
    int i, sum=1, s_old=0, s_new=1;
    for(i=1;i<=40;i++)
    {
        sum = s_old +s_new;
        s_old = s_new;
        s_new = sum;
        printf("第%d个月的兔子总数为：%d \n", i, sum);
        
    }
    return 0;
}
