#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f = fopen("test1.txt", "w");
    char *c;
    int n;
    c = (char *)malloc(sizeof(f));

        scanf("%d", &n);
            for(int i = 1; i < n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            fprintf(f, "%s", "FizzBuzz\n");
        else if(i % 5 == 0)
            fprintf(f, "%s","Buzz\n");
        else if(i % 3 == 0)
            fprintf(f, "%s", "Fizz\n");
        else
            fprintf(f ,"%d\n", i);
    }
    fclose(f);

    f = fopen("test1.txt", "r");
        while(!feof(f))
        {
            if(fscanf(f, "%s\n", c) > 0)
                printf("%s\n", c);
        }

    return (0);

}
