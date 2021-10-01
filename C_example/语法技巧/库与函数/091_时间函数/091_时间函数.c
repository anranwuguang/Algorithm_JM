//
//  main.c
//  091_时间函数
//
//  Created by 陈继明 on 2021/9/16.
//

#include <stdio.h>
#include <time.h>
 
//int main ()
//{
//    time_t rawtime;
//    struct tm * timeinfo;
//
//    time ( &rawtime );
//    timeinfo = localtime ( &rawtime );
//    printf ( "当前本地时间为: %s", asctime (timeinfo) );
//
//    return 0;
//}

//int main()
//{
//    time_t start,end;
//    int i;
//    start=time(NULL);
//    for(i=0;i<300000;i++)
//    {
//        printf("\n");  // 返回两个time_t型变量之间的时间间隔
//    }
//    end=time(NULL);
// 
//    // 输出执行时间
//    printf("时间间隔为 %6.3f\n",difftime(end,start));
//}

int main()
{
    long i=10000000L;
    clock_t start,finish;
    double TheTimes;
    printf("做%ld次空循环需要的时间为",i);
    start=clock();
    while(i--);
    finish=clock();
    TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%f秒。\n",TheTimes);
    return 0;
}
