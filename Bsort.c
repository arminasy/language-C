#include <stdio.h>
#define n 7

void    ft_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int num[n] = {34, 22, 55, 44, 15, 89, 48};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(num[j] > num[j + 1])
            {
                ft_swap(&num[j], &num[j + 1]);
            }
        }
        printf("%d\n", num[i]);
    }
    return (0);
}