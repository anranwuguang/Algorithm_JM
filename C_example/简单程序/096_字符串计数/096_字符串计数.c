//题目：计算字符串中子串出现的次数 。

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str1[20], str2[20];
    int i,j,t,count=0;
    unsigned long m,n;
    printf("请输入两个字符串：");
    scanf("%s%s",str1,str2);
    m=strlen(str1);
    n=strlen(str2);
    for (i=0; i<=m-n; i++)
    {
        for(j=0,t=i;j<n && str1[t]==str2[j];j++,t++);
        if (j==n) count++;
    }
    printf("%s 中 %s 出现了%d次 \n",str1, str2, count);
    return 0;
}
