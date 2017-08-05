/**
 *
 * @copyright:
 * @file: primeNumber.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     primeNumber
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

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
