//
//  main.c
//  001_字符串匹配问题
//
//  Created by 陈继明 on 2021/9/26.
//

#include <stdio.h>
#include <string.h>
#define N 100

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[N],check[N+1];
    int i,len,count=0,illegal=0;
    printf("请输入一个字符串(只包含（）和[] )：");
    scanf("%s",s);
    len=strlen(s);
    printf("字符串长度为：%d\n",len);
    for (i=0; i<len; i++) {
        if(s[i]=='('||s[i]=='[')
            check[++count]=s[i];
        else if((s[i]==']'&& check[count]=='[')||(s[i]==')'&& check[count]=='('))
                check[count--]='\0';
        else
            illegal++;
    }
    
    printf("%d %d 至少需要加%d个字符。\n",illegal,count,illegal+count);
    return 0;
}
