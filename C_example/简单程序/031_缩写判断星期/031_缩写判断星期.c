/*题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
*/
#include <stdio.h>

int main(int argc, const char * argv[])
{
    char first, second;
    char upletter(char);
    printf("请输入第一个字母：");
    scanf("%c", &first);
    getchar();
    first = upletter(first);
    switch (first) {
        case 'M':
            printf("Monday!\n");
            break;
        case 'T':
            printf("请输入第二个字母：");
            scanf("%c", &second);
            second = upletter(second);
            if (second == 'U')
                printf("Tuesday!\n");
            else if (second == 'H')
                printf("Thursday!\n");
            else
                printf("The second letter is wrong!\n");
            break;
        case 'W':
            printf("Wednesday!\n");
            break;
        case 'F':
            printf("Friday!\n");
            break;
        case 'S':
            printf("请输入第二个字母：");
            scanf("%c", &second);
            second = upletter(second);
            if (second == 'A')
                printf("Satuday!\n");
            else if (second == 'U')
                printf("Sunday!\n");
            else
                printf("The second letter is wrong!\n");
            break;
        default:
                printf("The first letter is wrong!\n");
            break;
    }
    return 0;
}

char upletter(char lower)
{
    if ('a'<lower && lower<'z')
        lower = lower-32;
    return lower;
}
