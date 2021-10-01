//题目：填空练习（指向指针的指针）。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    const char *s[]={"man","woman","girl","boy","sister"};
    const char **q;
    int k;
    for(k=0;k<5;k++)
    {
        q=&s[k];       /*在这里填入内容*/
        printf("%s\n",*q);
    }
    return 0;
}
