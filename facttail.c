/**
 *
 * @copyright:
 * @file: facttail.c
 * @since: 2017-08-20
 * @author: czq | 7160844@qq.com
 * @description:
 *    以尾递归的形式计算阶乘的一个函数实现
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-20        1.0             开始创建
 *
 **/

# include <stdio.h>

int facttail(int n, int a)
{
  if (n < 0)
    return 1;
  else if (n == 0)
    return 1;
  else if (n == 1)
    /* 不能是return 1; */
    return a;
  else
    return facttail(n-1, n*a);
}

int main()
{
  printf("the result is %d\n", facttail(4, 1));
}
