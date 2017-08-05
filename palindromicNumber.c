/**
 *
 * @copyright:
 * @file: palindromicNumber.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     判断用户的输入是否是回文数
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

#include <stdio.h>

int main(void)
{
    int val;
    int sum = 0;
    int temp;
    printf("Please enter a number: ");
    scanf("%d", &val);

    temp = val;

    while(temp)
    {
        sum = sum*10 + temp%10;
        temp /= 10;
    }

    if (sum == val)
        printf("%s\n", "Yes, This is a palindromic number\n");
    else
        printf("%s\n", "No, This is not a palindromic number\n");

    return 0;
}
