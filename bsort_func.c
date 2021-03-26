#include <stdio.h>
#include <stdlib.h>
#define n 10

void   ft_swap(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}

void  bsort(int arr[], int arr_size)
{
  int i,j,temp;
  for(i = 0; i < (arr_size - 1); i++)
  {
    for(j = 0; j < arr_size - 1 - i; ++j)
    {
      if(arr[j] > arr[j + 1])
      {
        ft_swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int   main(void)
{
  printf("Enter %d quanity numbers for sorting\n\n", n);
  int arr[n];
  for(int j = 0; j < n; j++)
  {
    scanf("%d", &arr[j]);
  }
  bsort(arr, n);
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return (0);
}
