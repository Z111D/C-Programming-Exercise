#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);        //读取三角形的行数
    for(i=1;i<=n;i++)        //外循环，控制行数
    {
        for(j=0;j<n-i;j++)        //输出第行前面的空格
            printf(" ");
        if(i>1)            //第一行除外
        {
            printf("*");        //先打首个*
            for(j=1;j<2*(i-1);j++)    //若非最后一行则中间连续若干空格
                if(i<n)printf(" ");
                else printf("*");            //最后一行则中间也是*
        }
        printf("*\n");        //打印最后一个*，然后换行
    }
    system("pause");        //暂停程序，便于看清结果
    return 0;            //返回0值，表示正常运行结束
}
