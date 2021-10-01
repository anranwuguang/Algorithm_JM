/*题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
*/

#include <stdio.h>
#define N 3
int main()
{
    int i, j;
    char red[N]={'a','b','c'}, blue[N]={'x','y','z'},new[N]={0,0,0};
    for(i=0; i<N; i++)
    {
        for(j=0; j<N && i!=j; j++)
        {
            new[0]=blue[i];
            new[1]=blue[j];
            new[2]=blue[3-i-j];
            if (new[0]!='x'&& new[2]!='x'&&new[2]!='z') {
                printf("对阵名单为：%c--%c  %c--%c  %c--%c", red[0],new[0],red[1],new[1],red[2],new[2]);
                
            }
        }
    }
    return 0;
}
