/*题目：取一个整数 a 从右端开始的 4～7 位。

程序分析：可以这样考虑：

  1.先使 a 右移 4 位。

  2.设置一个低 4 位全为 1，其余全为 0 的数，可用(0<<4)

  3.将上面二者进行 & 运算。
*/

#include <stdio.h>
#define N 4
int main(int argc, const char * argv[])
{
    int a,b;
    printf("请输入一个整数：");
    scanf("%x", &a);
    a = a>>N;
    b = ~(~ 0u<<N);
    a &= b;
    printf("提取出的数字为%x\n",a);
    return 0;
}
