//题目：输入一个偶数并分解为两个质数之和

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Isprimer(unsigned int n);
int main(int argc, const char * argv[]) {
    // insert code here...
    int data,i;
    printf("请输入一个偶数：");
    scanf("%d", &data);
    if (data%2!=0) {
        printf("输入的数字不是偶数！\n");
        exit(0);
    }
    for(i=1;i<sqrt(data)+1;i++)
    {
        if (Isprimer(i) && Isprimer(data-i)) {
            printf("偶数%d可以分解为%d和%d两个质数之和\n",data, i, data-i);
            break;
        }
    }
    return 0;
}

int Isprimer(unsigned int n)
{
    int i;
    if(n<4) return 1;
    for(i=2;i<sqrt(n)+1;i++)
    {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}
