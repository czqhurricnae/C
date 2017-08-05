/**
 *
 * @copyright:
 * @file: simpleRead.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     # include <unistd.h>
 *     size_t read(int filedes, const void *buf, size_t nbytes);
 *     系统调用read的作用是从与文件描述符fildes相关联的文件里读入nbytes个字节的数据并把它们放到数据区buf里去,
 *     它的返回值是实际读入的字节数
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

int main(void)
{
  char buffer[128];
  int nread;

  nread = read(0, buffer, 128);
  if (nread == -1)
  {
    write(2, "A read error has occured\n", 26);
  }

  if ((write(1, buffer, nread)) != nread)
  {
    write(2, "A write error has occured\n", 27);
  }

  return 0;
}
