#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{

    char Player[50];
    printf("Hello what is your name: ");
    scanf("%s", &Player);
    printf("Hello %s lets play game, I want you to think number 0 to 100 and you will guess\n", Player);
    srand(time(NULL));
    int r = rand() % 100;
    int i = 0;
    int c = 0;


    while(r != i)
    {
        printf("Check the number 0 to 100: ");
        scanf("%d", &i);
        if(i < r)
        {
            printf("Checked Number is less than guessed\n");
            c++;
        }
        else if(i > r)
        {
            printf("Checked number is greater than guessed\n");
            c++;
        }
        else if(i < 65);

        else
            printf("Woowwwww you won : it took you %d tries\n", c);
    }
}
