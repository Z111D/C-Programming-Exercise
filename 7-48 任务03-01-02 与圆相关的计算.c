#include<stdio.h>
int main()
{
    double r;
    double pi=3.14159;
    scanf("%lf",&r);
    printf("%.4lf %.4lf %.4lf",2.0*r,2.0*pi*r,pi*r*r);
    return 0;
}

/*任务描述
给出圆的半径，求圆的直径、周长和面积。

输入格式:
输入包含一个实数r（0 < r <= 10,000），表示圆的半径。

输出格式:
输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，

输入样例:
3.0



输出样例:
6.0000 18.8495 28.2743



提示
如果圆的半径是r，那么圆的直径、周长、面积分别是2r、2 pi r、pi r * r，其中约定pi＝3.14159。 可以使用printf("%.4lf", ...)实现保留小数点后4位。 注：该题目选自OpenJudge网站，在线网址：http://noi.openjudge.cn/ch0103/09/。*/
