/*题目：求1+2!+3!+...+20!的和。

程序分析：此程序只是把累加变成了累乘。
*/

#include <stdio.h>

int main()
{
    long int i, sum=0, s=1;
    for (i=1; i<=20; i++) {
        s *= i;
        sum += s;
    }
    printf("1!+2!+...+20! = %ld \n",sum);
    return 0;
}
