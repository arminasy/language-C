#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i;
  
  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return (i);
}

char  *ft_strdup(const char *s1)
{
  int i;
  char *str;
  str = (char *)malloc(ft_strlen((char *)s1));
  i = 0;
  while(s1[i] != '\0')
  {
    str[i] = s1[i];
    i++;   
  }
  return (str);
}

int main() 
{  
    char source[] = "sdf GeeksForGeeks sffd"; 
    char * target = ft_strdup(source);
    for(int i = 0; i < ft_strlen(target); i++)
    {
      printf("%d element is (%c)\n",i, target[i]);
    }
    return 0; 
} 
