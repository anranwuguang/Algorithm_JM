/*题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。
*/

#include <stdio.h>
#define N 10
#define N1 11
int main(int argc, const char * argv[])
{
    int a[N1]={1,4,6,9,13,16,19,28,40,100};
    int temp1,temp2,number,end,i,j;
    printf("原始数组是:\n");
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
    printf("\n插入一个新的数字: ");
    scanf("%d",&number);
    if (number > a[N-1]) {
        a[N] = number;
    }
    else{
        for (i=N-2; i>=0; i--){
            if(number>a[i]){
                for(j=N;j>i;j--)
                    a[j]=a[j-1];
                a[j+1]=number;
                break;
            }
        }
    }
    printf("插入数字后的数组为：");
    for(i=0;i<N1;i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
}
