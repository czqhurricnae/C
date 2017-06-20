/***********************************************************
 Module Name: fibonacciNumber.c
 Module Date: 2017-04-20 20:28
 Module Auth:
 Description: 生成fibonacci
 Others:
 Revision History:
 Date            Rel Ver.        Notes
 2017-04-20        1.0           开始创建
***********************************************************/


# include <stdio.h>

int main(void)
{
    int f1 = 0;
    int f2 = 1;
    int f3 = 1;
    int number;

    printf("%s\n", "请输入你所需的斐波那契数列的位数: ");
    scanf("%d", &number);

    if (0==number)
    {
        printf("%d\n", f1);
    }
    else if (1==number)
    {
        printf("%d\n", f2);
    }
    else
    {
        for (int i = 2; i <= number; ++i) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("%d\n", f3);
    }


    return 0;
}


/*
 * 最多只能计算至46位的斐波那契数列,因为int类型的存储数据范围为 '-21474836 *47 to 2147483647',int类型为4个字节(2**32=4294967296* ),但是分为正负.
 */
