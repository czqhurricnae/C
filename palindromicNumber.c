/***********************************************************
 Module Name: palindromicNumber.c
 Module Date: 2017-04-21 11:57
 Module Auth:
 Description: 判断用户输入的数字是否是一个回文数
 Others:
 Revision History:
 Date            Rel Ver.        Notes
 2017-04-21        1.0           创建文档
***********************************************************/


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
