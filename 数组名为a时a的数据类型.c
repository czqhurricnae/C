/**
 *
 * @copyright:
 * @file: 数组名为a时对a取地址符的数据类型.c
 * @since: 2017-08-06
 * @author: czq | 7160844@qq.com
 * @description:
 *     数组名为a时对a取地址符的数据类型
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-06        1.0             开始创建
 *
 **/

# include <stdio.h>

int main(void)
{
  int a[10] = {1, 2, 3, 4, 5};
  printf("%p, %p\n", a, a+1);

  return 0;
}
 
