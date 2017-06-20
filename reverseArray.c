/***********************************************************
 Module Name: reverseArray.c
 Module Date: 2017-04-21 11:49
 Module Auth:
 Description: 将一个一元数组倒序
 Others:
 Revision History:
 Date            Rel Ver.        Notes
 2017-04-21        1.0           创建文档
***********************************************************/


# include<stdio.h>

int main(void)
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 0;
    int j = 7;
    int temp;

    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        ++i;
        --j;
    }

    for (int i = 0; i < 8; ++i) {
        printf("%d\n", a[i]);
    }

    return 0;
}
