/***********************************************************
 Module Name: if...else..
 Module Date: 2017-04-20 20:33
 Module Auth:
 Description: 测试if...else...逻辑漏洞
 Others:
 Revision History:
 Date            Rel Ver.        Notes
 2017-04-20        1.0           开始创建
***********************************************************/


#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;
    int k = 3;
    if (j > i)
        printf("%c\n", 'a');
    else if (k > i)
        printf("%c\n", 'b');
    else
        printf("%c\n", 'c');

    return 0;
}


/*
 *  a
 */
