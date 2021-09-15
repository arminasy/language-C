#include <stdio.h> // printf()
#include <time.h> //size_t
#include <stdlib.h> //rand()

#define m 10 // width
#define t 10 // height

// init m & t 2d array with int range min max

void init(int arr[m][t], int lowest, int highest) {
    for (int i = 0; i < m; i++){
        for(int k = 0; k < t; k++){
            arr[i][k] = (rand() % (highest - lowest + 1)) + lowest;
        }     
    }
}

void showarr(int arr[m][t], size_t n)
{
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
        // if(arr[i][j] % 2 == 0)
        //     arr[i][j] = 32;
        // else
        //     arr[i][j] = 42;
      printf("%c ", arr[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  srand(time(NULL));
  int arr[m][t] = {0};
  init(arr, 65, 90);
  // bsort(*arr, 10);
  showarr(arr, 10);
}
