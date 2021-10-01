//
//  main.c
//  033_判断素数
//
//  Created by 陈继明 on 2021/9/10.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int i, t, r=0, data ;
    
    printf("请输入一个大于1的正数：");
    scanf("%d", &data);
    if (data<2) {
        printf("输入的数据不合理\n");
        return 0;
    }
    else
    {
        t=sqrt(data);
        for (i=2; i<=t; i++) {
            if (data%i ==0) {
                r=1;
                break;
            }
        }
        r==1?printf("%d不是素数\n",data):printf("%d是素数\n",data);
    }
    return 0;
}
