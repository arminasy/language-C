#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void  ft_swap(char *a, char *b)
{
  char swaped;
  swaped = *a;
  *a = *b;
  *b = swaped;
}

size_t  ft_strlen(char *str)
{
  size_t i;
  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return (i);
}

char *ft_strcpy(char *dst,const char *src)
{
  size_t i;
  i = 0;
  if(dst != NULL)
  {
    while(src[i] != '\0')
    {
      dst[i] = src[i];
      i++;
    }
  }
  return (dst);
}

char *ft_strrev(char *dst, char *src)
{
  size_t i ,j;
  ft_strcpy(dst, src);
  size_t len = ft_strlen(dst);

  for(int i = 0, j = len - 1; i < j; i++, j--)
  {
    ft_swap(&dst[i], &dst[j]);
  }
  return (dst);
}

int main(void) {
  
  char *text;
  printf("Enter text for look reversed text : ");
  scanf("%[^\n]s", text);
  char *reved;
  reved = malloc(sizeof(char) * ft_strlen(text));
  ft_strrev(reved, text);
  printf("%s\n", reved);
  return 0;
}
