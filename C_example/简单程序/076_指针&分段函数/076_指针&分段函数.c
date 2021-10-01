//题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。

#include <stdio.h>

double oddnumber(int n);
double evennumber(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    float resutls;
    int n;
    printf("请输入n的值：");
    scanf("%d", &n);
    
    if (n%2) {
        resutls=oddnumber(n);
        printf("1/1+1/3+...+1/n =%f \n", resutls);
        
    }
    else
    {
        resutls=evennumber(n);
        printf("1/2+1/4+...+1/n =%f \n", resutls);
    }
    
    return 0;
}


double oddnumber(int n)
{
    double r=0;
    if (!n%2) {
        printf("程序调用错误!\n");
    }
    while(n>=1)
    {
        r += 1.0/(double)n;
        n -= 2;
    }
    return r;
}
double evennumber(int n)
{
    double r=0;
    if (n%2) {
        printf("程序调用错误!\n");
    }
    while(n>=2)
    {
        r += 1.0/(double)n;
        n -= 2;
    }
    return r;
}
