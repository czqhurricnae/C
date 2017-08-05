/**
 *
 * @copyright:
 * @file: copySystem.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     逐个字符地把一个文件拷贝为另外一个文件
 *     unistd.h必须最早出现, 因为它根据POSIX技术规范定义的标志将影响到其他的头文件
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <stdio.h>

int main()
{
  char c;
  int in, out;

  in = open("file.in", O_RDONLY);
  out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
  while(read(in, &c, 1) == 1)
  {
    write(out, &c, 1);
  }
}
