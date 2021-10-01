/*题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

程序分析：学会分解出每一位数，如下解释。
*/

#include <stdio.h>

int main()
{
    int  num=0, data;
    printf("请输入正整数：");
    scanf("%d", &data);
    printf("逆序输出各位数为：");
    while (data)
    {
        num++;
        printf(" %d", data%10);
        data /= 10;
    }
    printf("\n正整数位数为：%d\n", num);
    return 0;
}
