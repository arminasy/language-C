#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

char    *str_to_upper(const char *str)
{
    size_t  i;
    char    *p;
    char    *res;

    i = 0;
    p = (char *)str;
    if(!(res = malloc(strlen(str) * sizeof(char) + 1)))
        return (NULL);
    while(p[i] != '\0')
    {
        if(p[i] >= 65 && p[i] <= 90)
        {
            res[i] = p[i];
            i++;
        }    
        else if (p[i] == 32)
        {
            res[i] = 32;
            i++;
        }
        else
        {
            res[i] = p[i] - 32;
            i++;
        }
    }
    res[i] = '\0';
    return (res);
}

bool    pangram(const char *str)
{
    size_t i;
    int total;
    char *p;
    
    if(!(p = malloc(strlen(str) * sizeof(char) + 1)))
        return (0);
    p = str_to_upper(str);
    i = 0;
    total = 0;

    
    while(p[i] != '\0')
    {
        if(p[i] == 32)
            i++;
        total += p[i];
        i++;
        if(total == 2015)//uppercase symbol total sum to integer equal 2015;
            return (true);
    }
    p[i] = '\0';
    return (false);
}

int main(void)
{
    char *isPangram = "abcDEFgHIjKlmn opqrsTUVWXYZ";//is Pangram , the characters are not repeated.
    char *isntPangram = "AAbcdeFghIjkLmnOPQRstuvwXYZ";//is not Pangram, because characters are repeated.
    printf("is Pangram > ? : %s\n", pangram(isPangram) ? "true" : "false");//Should be true
    printf("is Pangram > ? : %s\n", pangram(isntPangram) ? "true" : "false");//Should be false
}
