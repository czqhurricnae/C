/**
 *
 * @copyright:
 * @file: simpleWrite.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     # include <unistd.h>
 *     size_t write(int fildes, const void *buf, size_t nbytes);
 *     系统调用write的作用是把缓冲区buf里的前nbytes个字节写入与文件描述符fildes相关联的文件中去,
 *     它的返回值是实际写出的字节数
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

# include <unistd.h>
# include <stdio.h>
# include <string.h>

int main(void)
{
  printf("The length of string is %ld\n", strlen("Here is some data\n"));
  if (write(1, "Here is some data\n", 18) != 18)
  {
    write(2, "A write error has occured on file descriptpr 1 \n", 46);
  }
  return 0;
}
