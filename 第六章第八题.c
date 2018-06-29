#include <stdio.h>
#define M 3
#define N 3 
int main()
 {
     int a[M][N];
     int i, j;
     int temp = 1, temp1[M], temp2[N];
     printf("请根据提示输入二维数组。\n");
     for (i = 0;i<M;i++)
         for (j = 0;j < N;j++)
         {
             printf("a[%d][%d]=", i+1, j+1);
             scanf("%d", &a[i][j]);
         }
     for (i = 0;i < M;i++)
     {
         for (j = 0;j < N;j++)
             printf("%d\t", a[i][j]);
         printf("\n");
     }
     for (i = 0;i < M;i++)
     {
         temp1[i] = a[i][0];    
         temp2[i] = a[0][i];   
         for (j = 0;j < N;j++)
         {
             if (temp1[i] < a[i][j])    temp1[i] = a[i][j];
             if (temp2[i] > a[j][i])    temp2[i] = a[j][i];
         }
     }
     for (i = 0;i < M;i++)
     {
         for (j = 0;j < N;j++)
         {
             if (a[i][j] == temp1[i] && a[i][j] == temp2[j])
                 printf("这个二维数组的鞍点为%d\n", a[i][j]);
             else
                 temp = 0;
 
         }
     }
 }