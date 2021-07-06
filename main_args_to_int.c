#include <stdio.h>

#define n 4

int			ft_atoi(char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	while (str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		str++;
	result = 0;
	sign = (str[0] == '-' ? -1 : 1);
	str = (str[0] == '-' || str[0] == '+') ? str + 1 : str;
	while (str[0] == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (result * sign);
}

int main(int argc, char **argv)
{
  int j = 0;
  int i = 1;
  // int j = 0;
  int tonum[n] = {};
  if(argc > 1)
  {
    while(j <= n)
    {
      tonum[j] = ft_atoi(argv[j]);
      j++;
    }
  }

  i = 0;
  if(argc > 1)
  {
    while(i < n)
      {
      printf("%d\n", tonum[i + 1]);
      i++;
    } 
  }

  return (0);
}
