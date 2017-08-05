/**
 *
 * @copyright:
 * @file: copyBlock.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     每次拷贝长度为1K的数据块
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-05        1.0             开始创建
 *
 **/

# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

int main()
{
  char block[1024];
  int in, out;
  int nread;

  in = open("file.in", O_RDONLY);
  out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
  while((nread = read(in, block, sizeof(block))) > 0)
  {
    write(out, block, nread);
  }

  return 0;
}
