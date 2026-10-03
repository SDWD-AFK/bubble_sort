#include <stdio.h>

/* 冒泡排序：相邻两个比较，大的往后换，每轮把这轮最大的送到末尾 */
void bubble_sort(int a[], int n)
{
    int i, j, tmp;

    for (i = 0; i < n - 1; i++)              /* 一共 n-1 轮 */
    {
        for (j = 0; j < n - 1 - i; j++)      /* 已排好的尾部不用再比 */
        {
            if (a[j] > a[j + 1])             /* 前大后小 -> 交换 */
            {
                tmp      = a[j];
                a[j]     = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(void)
{
    int a[8];
    int i;

    printf("Please input 8 numbers:");
    for (i = 0; i < 8; i++)
    {
        if (scanf("%d", &a[i]) != 1)         /* 读入 8 个整数 */
        {
            return 1;
        }
    }

    bubble_sort(a, 8);

    printf("After sorting:");
    for (i = 0; i < 8; i++)
    {
        printf(" %d", a[i]);                 /* 数字之间一个空格 */
    }
    printf("\n");

    return 0;
}
