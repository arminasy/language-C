#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f = fopen("test1.txt", "w");
    int row = 0;
    int col = 0;
    int count = 0;
    char (*c)[col] = malloc(sizeof(char) * (row * col));

        scanf("%d", &row);
        scanf("%d", &col);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            fprintf(f, "%c", '#');
            count++;
        }
        fprintf(f, "%c", '\n');
    }
    fprintf(f, "\n%d", count);
    fclose(f);

    f = fopen("test1.txt", "r");
        while(!feof(f))
        {
            if(fscanf(f, "%s\n", &c[row][col]) > 0)
                printf("%s\n", &c[row][col]);
        }

    return (0);

}
