//题目：字符串反转，如将字符串 "www.nowcoder.com" 反转为 "moc.redocwon.www"。

#include <stdio.h>
#define N 100

void reverse(char * str1);
int my_lenstr(char * str1);

int main(int argc, const char * argv[])
{
    char str1[N]={'\0'};
    
    printf("请输入字符串：");
    scanf("%s",str1);
    reverse(str1);
    printf("反转的字符串为：%s\n",str1);
    return 0;
}

void reverse(char * str1)
{
    int len=0, i=0;
    char * p=str1;
    char c;
    
    len=my_lenstr(p);
    i=0;
    while(i<=len/2)
    {
        c = *(str1 + i) ;
        *(str1 + i) = *(str1+len-i);
        *(str1+len-i)=c;
        i++;
    }
}

int my_lenstr(char * str1)
{
    int len=-1;
    char * p=str1;
    while (*p) {
        ++len;
        p++;
    }
    return len;
}
