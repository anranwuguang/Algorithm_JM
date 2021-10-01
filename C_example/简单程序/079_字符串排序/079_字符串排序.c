//题目：字符串排序。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

void swap(char * str1, char * str2);

int main(int argc, const char * argv[]) {
    // insert code here...
    char str1[N], str2[N], str3[N];
    
    printf("请输入3个字符串\n");
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    
    if (strcmp(str1,str2)>0) {
        swap(str1,str2);
    }
    if (strcmp(str1,str3)>0) {
        swap(str1,str3);
    }
    if (strcmp(str2,str3)>0) {
        swap(str2,str3);
    }
    printf("排序后的结果为：\n");
    printf("%s\n%s\n%s\n",str1,str2,str3);
    return 0;
}

void swap(char * str1, char * str2)
{
    char temp[N];
    strcpy(temp,str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
