/**
 *
 * @copyright:
 * @file: primeFactors.c
 * @since: 2017-08-20
 * @author: czq | 7160844@qq.com
 * @description:
 *    C program to print all prime factors of a number using for loop
 * @usage:
 * @others:
 * @TODO:
 * @Revision History:
 * Date            Rel Ver.        Notes
 * 2017-08-20        1.0             开始创建
 *
 **/

#include <stdio.h>

int main()
{
  int counter, N, i, isPrime;

  printf ("Enter a number\n");
  scanf("%d", &N);

  printf ("List of prime factors of %d\n", N);
  /* Check for every number between 1 to N, whether it divides N */
  for (counter = 2; counter <= N; ++counter)
  {
    if (0 == N%counter)
    {
      /* Check if counter is also a prime number */
      isPrime = 1;
      for (i = 2; i <= (counter/2); ++i)
      {
        if (0 == counter%i)
        {
          isPrime = 0;
          break;
        }
      }
      if (1 == isPrime)
      {
        printf ("%d ", counter);
      }
    }
  }

  return 0;
}
