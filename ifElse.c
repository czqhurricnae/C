/**
 *
 * @copyright:
 * @file: ifElse.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     ifElse
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

# include <stdio.h>

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
