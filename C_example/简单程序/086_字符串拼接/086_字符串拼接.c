//
//  main.c
//  086_字符串拼接
//
//  Created by 陈继明 on 2021/9/16.
//

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define N 20

char * strconnect(char *str1,char *str2);
 
int main(int argc, const char * argv[]) {
    // insert code here...
    char str1[N], str2[N];
    char * str3;
    printf("请输入字符串1：");
    scanf("%s",str1);
    printf("请输入字符串2：");
    scanf("%s",str2);
    
    str3=strconnect(str1,str2);
    printf("拼接后的字符串为：%s\n", str3);
    return 0;
}

char * strconnect(char *str1, char *str2)
{
    char *str3;
    str3 =(char *) malloc(strlen(str1)+strlen(str2)+1);
    str3[0]='\0';
    strcat(str3, str1);
    strcat(str3, str2);
    return  str3;
}
