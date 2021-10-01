/*C 练习实例14 - 将一个正整数分解质因数
题目：将一个正整数分解质因数。例如：输入90,打印出90=233*5。

程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：

如果这个质数恰等于（小于的时候，继续执行循环）n，则说明分解质因数的过程已经结束，另外 打印出即可。
但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数n.重复执行第二步。
如果n不能被k整除，则用k+1作为k的值,重复执行第一步。
*/

#include <stdio.h>

int main()
{
    unsigned int data,i;
    printf("请输入正整数: ");
    scanf("%d", &data);
    printf("%d = ", data);
    if (data==1)
        printf("1");
    else
    {
        for(i=2;i<=data;i++)
        {
            
            while(data%i==0)
            {
                data /= i;
                if (data ==1) {
                    printf("%d ",i);
                } else {
                    printf("%d * ",i);
                }
                
            }
        }
    }
    printf("\n");
    return 0;
}
