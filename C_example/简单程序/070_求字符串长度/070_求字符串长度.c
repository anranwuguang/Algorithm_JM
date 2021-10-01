//题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。

#include <stdio.h>
#define N 20

int main(int argc, const char * argv[]) {

    char s[N];
    int len;
    
    int my_strlen(char * s);
    
    printf("请输入字符串：");
    scanf("%s",s);
    len=my_strlen(s);
    printf("输入的字符串长度为：%d\n",len);
    return 0;
}

int my_strlen(char * s)
{
    char * p=s;
    int len=0;
    while(*p++)
    {
        len++;
    }
    return len;
}
