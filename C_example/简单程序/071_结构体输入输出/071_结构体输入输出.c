//题目：编写input()和output()函数输入，输出5个学生的数据记录。

#include <stdio.h>
#define N 1
typedef struct{
    char name[20];
    char sex[5];
    int  age;
}Stu;

void stu_input(Stu * new_stu,int i);
void stu_output(Stu * new_stu,int i);

int main(int argc, const char * argv[]) {
    // insert code here...
    Stu stu[N];
    int i=0;
    printf("Hello, World!\n");
    stu_input(stu,i);
    stu_output(stu,i);
    return 0;
}

void stu_input(Stu * new_stu, int i)
{
    printf("请输入学生信息：姓名 性别 年龄:\n");
    scanf("%s%s%d", new_stu[i].name, new_stu[i].sex, &new_stu[i].age);
}
void stu_output(Stu * new_stu,int i)
{
    printf("学生信息：");
    printf("%20s%10s%5d \n", new_stu[i].name, new_stu[i].sex, new_stu[i].age);
}

