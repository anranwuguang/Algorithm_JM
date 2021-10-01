//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int data, invert=0, s;
    printf("请输入一个整数：");
    scanf("%d", &data);
    s=data;
    while(s)
    {
        invert += s%10;
        s /= 10;
        invert *= 10;
    }
    if(invert/10==data)
        printf("%d是回文数。 \n", data);
    else
        printf("%d不是回文数。 \n", data);
    return 0;
}
