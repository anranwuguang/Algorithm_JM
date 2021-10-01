//
//  main.c
//  二维数组动态分配
//
//  Created by 陈继明 on 2021/9/26.
//

#include <stdio.h>
#include <stdlib.h>
void init_array(int ** a, int M, int N);
void print_array(int ** a, int M, int N);
int main(int argc, const char * argv[]) {
    // insert code here...
    int **a;
    int i,j,M,N;
    printf("请输入二维数组的维度：");
    scanf("%d %d",&M,&N);
    a=(int **)malloc(sizeof(int*)*M);
    *a=(int *)malloc(sizeof(int)*M*N);
    for (i=0; i<M; i++){
        a[i]=a[0]+i*N;
    }
    init_array(a,M,N);
    print_array(a,M,N);
    return 0;
}

void init_array(int ** a, int M, int N)
{
    int i,j;
    printf("请输入二维数组的各个元素：");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d",&a[i][j]);
        }
    }
}
void print_array(int ** a, int M, int N)
{
    int i,j;
    printf("打印输出二维数组的各个元素：\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
