#include<stdio.h>
int main()
{
    int v;
    scanf("%d",&v);
    if(v<=10)printf("%d",2*v);
    else     printf("%d",20+(v-10)*3);
    return 0;
}

/*某小区的煤气采用梯度收费制度，当某户使用煤气不超过10立方米（包括10立方米）的话，每立方米煤气收费2元；当用户使用煤气超过10立方米的话，超出部分的费用则为每立方米3元。

输入格式:
输入一个大于等于0小于等于100的整数

输出格式:
直接输出煤气的费用

输入样例:
在这里给出一组输入。例如：

9



输出样例:
在这里给出相应的输出。例如：

18



输入样例:
在这里给出一组输入。例如：

10



输出样例:
在这里给出相应的输出。例如：

20



输入样例:
在这里给出一组输入。例如：

11



输出样例:
在这里给出相应的输出。例如：

23*/
