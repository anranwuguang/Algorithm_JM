//题目：八进制转换为十进制

#include <stdio.h>

#define N 10
int main(int argc, const char * argv[]) {
    // insert code here...
    char s[N];
    int i=0, t, r=0; //t表示正在被处理的位的数字
    printf("请输入需要被转换的八进制数：\n");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        t = s[i]-'0';
        printf("%d",t);
        r = r*8+t;
        i++;
    }
    printf("转换后的十进制数为：%d\n",r);
    return 0;
}
