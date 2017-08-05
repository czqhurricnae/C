/**
 *
 * @copyright:
 * @file: statTest.c
 * @since: 2017-08-05
 * @author: czq | 7160844@qq.com
 * @description:
 *     对"文件代表的不是一个子目录, 设置了属主的执行权限, 不再有其他权限"这种情况进行测试
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
# include <sys/types.h>
# include <stdio.h>

int main()
{
  struct stat statbuf;
  mode_t modes;

  stat("filename", &statbuf);
  modes = statbuf.st_mode;

  if (!S_ISDIR(modes) && (modes & S_IRWXU) == S_IXUSR)
  {
    printf("test pasd\n");
  }
  else
  {
    printf("test failed\n");
  }
}
