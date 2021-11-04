#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define row 10
#define col 20

void  ft_box(int *arr)
{
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      *(arr + i*col + j) = '#';
    }
  }
  for(int i = 1; i < row-1; i++)
  {
    for(int j = 1; j < col-1; j++)
    {
      *(arr + i*col + j) = ' ';
    }
  }
}

void ft_show(int *arr)
{
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      printf("%c ",  *(arr + i*col + j));
    }
    printf("\n");
  }
}

// start position is *(arr + col + 1) = '%';

// void  ft_set(char c, int *arr)
// {
//   if(c == 'a')
//   {
//       *(arr + 4 * col + 1) = '%';
//       *(arr + 3 * col + 1) = '%';
//       *(arr + 2 * col + 1) = '%';
//       *(arr + 1 * col + 2) = '%';
//       *(arr + 3 * col + 1) = '%';

//   }
// }

int main(void) {

  int *arr = malloc(sizeof(int) * row * col);
  int i = 0;

  int a,b,c,d;

      a = 1;
      b = 2;
      c = 3;
      d = 4;

  while(i < 200)
  {
      ft_box(arr);

      *(arr + 4 * col + a) = '%';
      *(arr + 3 * col + a) = '%';
      *(arr + 2 * col + a) = '%';
      *(arr + 1 * col + b) = '%';
      *(arr + 3 * col + b) = '%';
      *(arr + 3 * col + c) = '%';
      *(arr + 2 * col + c) = '%';
      *(arr + 4 * col + c) = '%';
      ft_show(arr);
      a = a+1;
      b = b+1;
      c = c+1;
      d = d+1;
      i++;
      usleep(50000);
      system("clear");
  }
  return 0;
}
