/*题目：对10个数进行排序。

程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。
*/

#include <stdio.h>
#define N 3

int main(int argc, const char * argv[])
{
    int i,j,t;
    float a[N];
    printf("请输入10个数字：");
    for(i=0;i<N;i++)
        scanf("%f", &a[i]);
    printf("排序结果是：");
    for (i=0; i<N; i++) {
        t=a[i];
        for (j=i+1; j<N; j++) {
            if (a[j]<t) {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
        printf("%.1f ", a[i]);
    }
    printf("\n");
    return 0;
}
