#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define row 10
#define col 40

int pixel[row][col];

typedef struct  struct_pos
{
    int         x;
    int         y;
}               struct_pos;

struct_pos current_pos;



void    init_display()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            pixel[i][j] = '#';
        }
        for(int k = 1; k < row - 1; k++)
        {
            for(int m = 1; m < col - 1; m++)
            {
                pixel[k][m] = ' ';
            } 
        }
    }
}

void    show_display()
{
        for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%c", pixel[i][j]);
        }
        printf("\n");
    }
}

void    init_info(int x, char *text)
{
    for(int i = 0; i < strlen(text); i++)
    {
        (*pixel)[x] = text[i];
        pixel[x++];
    }
}

int main(void)
{
    int i = 41;
    // pixel[current_pos.x][current_pos.y];
    while(i !=  348)
    {
        system("clear");
        init_display();
        init_info(i, "Hello world!");
        show_display();
        i++;
        usleep(10000);
    }
    return (0);
}
