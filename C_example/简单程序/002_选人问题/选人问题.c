//
//  main.c
//  选人问题
//  n个人中选m个，m个中选一个当队长，问选人方案的数量
//  Created by 陈继明 on 2021/9/26.
//

#include <stdio.h>
float cbin_number(float n, float m);
int main(int argc, const char * argv[]) {
    // insert code here...
    float  m,n,r=0;
    printf("请输入n和m的值：");
    scanf("%f %f",&n,&m);
    while (m) {
        r += cbin_number(n, m)*m;
        m--;
        
    }
    printf("一共有%f种不同的方案。\n",r);
    return 0;
}

float cbin_number(float n, float m){
    float r=1;
    while(m){
        r *= (n-m+1)/m;
        m--;
        printf("%3f %3f %3f \n",n,m,r);
    }
    return r;
}
