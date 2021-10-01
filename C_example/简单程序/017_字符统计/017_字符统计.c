/*题目：输入一行字符，分别统计出其英文字母、空格、数字和其它字符的个数。

程序分析：利用while语句,条件为输入的字符不为'\n'。
*/

#include <stdio.h>

int main()
{
    char c;
    unsigned int letters=0, spaces=0, digits=0, others=0;
    printf("请输入一些字符：");
    while((c=getchar())!='\n')
    {
        if(('a'<=c && c<='z') || ('A'<=c && c<='Z'))
            letters++;
        else if (c==' ')
            spaces++;
        else if ('0'<=c && c<='9')
            digits++;
        else
            others++;
    }
    printf("字符统计结果为：\n");
    printf("     英文字母：%d \n", letters);
    printf("        空格：%d \n", spaces);
    printf("        数字：%d \n", digits);
    printf("     其他字符：%d \n", others);
    return 0;
}
