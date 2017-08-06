# include <stdio.h>

int main(void)
{
  FILE *fp;
  fp = fopen("test.txt", "r+");
  fprintf(fp, "This is for fprintf...\n");
  fputs("This is for fputs...\n", fp);
  fclose(fp);

  return 0;
}
