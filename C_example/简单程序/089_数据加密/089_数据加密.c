//题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下： 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int data,t,sum=0;
    printf("请输入一个四位数：");
    scanf("%d",&data);
    t=data;
    sum +=(t%(int)pow(10, 1)+5)%10 * (int)pow(10, 3);
    t/= 10;
    sum +=(t%(int)pow(10, 1)+5)%10 * (int)pow(10, 2);
    t/= 10;
    sum +=(t%(int)pow(10, 1)+5)%10 * (int)pow(10, 1);
    t/= 10;
    sum +=(t%(int)pow(10, 1)+5)%10 * (int)pow(10, 0);
    
    printf("加密后的数据为：%d\n", sum);
    
    return 0;
}

