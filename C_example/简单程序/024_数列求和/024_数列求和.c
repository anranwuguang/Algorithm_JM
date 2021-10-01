/*题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

程序分析：请抓住分子与分母的变化规律。
*/

#include <stdio.h>

int main()
{
    int i;
    float t,sum=0, fenzi=1, fenmu=1;
    for(i=1;i<=20;i++)
    {
        t=fenzi;
        fenzi=fenmu+fenzi;
        fenmu=t;
        sum += fenzi/fenmu;
    }
    printf("该数列的前20项之和为：%f \n",sum);
    return 0;
}
