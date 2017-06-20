/***********************************************************
 Module Name: primeNumber.c
 Module Date: 2017-04-22 20:18
 Module Auth:
 Description: 判断一个数是否为素数
 Others:
 Revision History:
 Date            Rel Ver.        Notes
 2017-04-22        1.0           创建文档
***********************************************************/


# include<stdio.h>
# include<stdbool.h>

bool isPrime(int a_value)
{
    int j;
    for (j = 2; j < a_value; ++j) {
        if (0 == a_value % j)
        {
            break;
        }
    }

    if (j == a_value) {
        return true;
    }

    if (j != a_value) {
        return false;
    }
}

int main(void)
{
    int value;
    printf("%s\n", "请输入需要判断是否为素数的数字: ");
    scanf("%d", &value);

    if (isPrime(value))
        printf("%s\n", "Yes!");
    else
        printf("%s\n", "No!");
}
