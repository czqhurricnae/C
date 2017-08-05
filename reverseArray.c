/**
 *
 * @copyright:
 * @file: reverseArray.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     reverseArray
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

# include<stdio.h>

int main(void)
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 0;
    int j = 7;
    int temp;

    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        ++i;
        --j;
    }

    for (int i = 0; i < 8; ++i) {
        printf("%d\n", a[i]);
    }

    return 0;
}
