#include<stdio.h>

int main()
{
    char s[100],*p;
    p = s;
    gets(s);
    for(;*p != '\0';p++)
        if(*p != 'a')
            printf("%c",*p);
    return 0;
}
/*
请使用指针的方法编写程序，程序的功能是从键盘输入一个字符串(字符串长度小于100)，删除其中的字母a后输出。例如，输入字符串abcaca，输出bcc。

输入样例:
abcaca



输出样例:
bcc
*/
