//
//  main.c
//  087_结构体变量做函数参数
//
//  Created by 陈继明 on 2021/9/16.
//

#include<stdio.h>
 
struct student
{
    int x;
    char c;
} a,*b;

void point_pass(struct student *b);
void value_pass(struct student b);
int main()
{
    a.x=3;
    a.c='a';
    b=&a;
    value_pass(a);
    printf("%d,%c \n",a.x,a.c);
    point_pass(b);
    printf("%d,%c \n",a.x,a.c);
}
void point_pass(struct student *b)
{
    b->x=20;
    b->c='y';
}
void value_pass(struct student b)
{
    b.x=20;
    b.c='y';
}
