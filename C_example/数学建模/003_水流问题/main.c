//
//  main.c
//  003_水流问题
//有一个水站网络共有n层，第i层有i个水站节点，如图所示连接，水流单向流动。
//每个水站在达到MAX个水流量时，称该水站满负荷工作，后续流进该水站的水流量，将会分为两等份流向它后面所连接的两个水站。若每秒都有流入第一个水站MAX个水流量，请问第T秒有多少个水站是满负荷工作的？
//  Created by 陈继明 on 2021/9/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float ** init_Matrix(int N,float value);
void print_Matrix(float ** M,int n);
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j,t,range,T,num;
    float ** Fpre,** Fvec,** Fnow;//Fpre记录了第i秒水站的水量，Fvec记录了第i秒的流速，Fnow为第i+1秒的水量
    printf("请输入时间t：");
    scanf("%d",&T);
    range=T+1;//2*ceil(log(T+1)/log(2));
    Fpre = init_Matrix(range,0);
    Fvec = init_Matrix(range,0);
    Fnow = init_Matrix(range,0);
    for (t=1,num=1,Fvec[0][0]=1; t<=T; t++) {
       // range=2*ceil(log(t+1)/log(2));
        //更新状态矩阵
        printf("t=%d,有%d个水站在工作。\n",t,num);
        print_Matrix(Fpre, range);
        print_Matrix(Fvec, range);
        for(i=0;i<range-1;i++){
            for(j=0;j<=i;j++){
                if(Fpre[i][j]<1&&Fvec[i][j]>0){
                    Fnow[i][j]=Fpre[i][j]+Fvec[i][j]/num;
                    Fpre[i][j]=Fnow[i][j];
                    if(Fnow[i][j]==1){
                        Fvec[i][j]=0;//停止蓄水
                        Fvec[i+1][j]=Fvec[i+1][j]-1;
                        Fvec[i+1][j+1]=Fvec[i+1][j+1]-1;//开始蓄水
                    }
                    
                }
            }
        }
        //print_Matrix(Fvec, range);
        
        for(i=0,num=0;i<range-1;i++){
            for(j=0;j<=i;j++){
                Fvec[i][j]=Fvec[i][j]<0?-Fvec[i][j]:Fvec[i][j];
                 num+=Fvec[i][j];
            }
        }
        
       
        //更新状态转移矩阵，即水的流速
//        for(i=0;i<range;i++){
//            for(j=0;j<=i;j++){
//                if(Fpre[i][j]<1&&Fpre[i][j]>=0) Fvec[i][j]=1.0/(float)num;
//            }
//        }
        
        
        print_Matrix(Fnow, range);
    }
    //range=ceil(log(T+1)/log(2));
    
    for(i=0,num=0;i<range;i++){
        for(j=0;j<=i;j++){
            if (Fpre[i][j]==1) num++; //统计一下有多少个水站满负荷
        }
        
    }
    printf("有%d个水站满负荷工作。\n",num);
    return 0;
}
float ** init_Matrix(int N,float value)
{
    int i,j;
    float ** F;
    F=(float ** )malloc(sizeof(float *)*N);
    *F=(float *)malloc(sizeof(float)*N*N);
    for(i=0;i<N;i++)
    {
        F[i]=F[0]+i*N;
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            F[i][j]=value;
    return F;
}
void print_Matrix(float ** M,int n)
{
    int i, j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3f ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
