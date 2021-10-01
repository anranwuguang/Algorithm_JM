//题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

#include <stdio.h>
#define MAX 50
int main(int argc, const char * argv[])
{
    int n, label;
    int left(int n);
    printf("请输入初始人数：");
    scanf("%d", &n);
    label=left(n);
    printf("最后留下的人原来是第%d\n",label);
    return 0;
}

int left(int n)
{
    int i,j=n,t, s[MAX];
    for (i=1; i<=n; i++){
        s[i-1]=i;
    }
    i=0;
    t=0;
    while(j>1){
        if (s[i]!=-1) {
            t++;
            if(t==3){
                s[i]=-1;
                j--;
                t=0;
            }
        }
        i++;
        if (i==n) {
            i=0;
        }
    }
    i=-1;
    while (s[++i]==-1);
    return  s[i];
}
