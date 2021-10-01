//题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

#include <stdio.h>
#define N 20
int main(int argc, const char * argv[])
{
    int i=0,t=0;
    char del, str1[N], str2[N];
    printf("请输入一个字符串：");
    scanf("%s", str1);
    getchar();
    printf("请输入要删除的字母：");
    del = getchar();
    while (str1[i]!='\0')
    {
        if(str1[i]!=del)
            str2[t++]=str1[i];
        i++;
    }
    str2[t]='\0';
    printf("删除%c后的字符串为：%s\n",del ,str2);
    return 0;
}
