#include<stdio.h>
int main()
{
    int m[10],i,n[10],j;
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i = 0,j=0;i < 9;i+=2,j++)
        n[j] = m[i];
    for(i = 0;i < 5;i++)
        printf("%4d",n[i]);
    return 0;
}

/*从键盘上输入10元素的值存入一维数组m中，然后将下标为（0. 2. 4. 6. 8）的元素值赋值给数组n，最后输出数组n的内容。

输入格式:
在一行中输入10个整数，数据之间各用一个空格间隔。

输出格式:
在一行中直接输出结果，每个数据输出占4列列宽。

输入样例:
1 4 7 8 5 2 6 9 3 1



输出样例:
   1   7   5   6   3*/
