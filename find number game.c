#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{

    char Player[100];
    printf("Hello what is your name: ");
    scanf("%s", Player);
    printf("\nHello %s lets play game:\n\nGuess the number 0 to 100 and you will win\n\n", Player);
    srand(time(NULL));
    int r = rand() % 100;
    int i = 0;
    int c = 0;


    while(r != i)
    {
        printf("\n");
        printf("Check the number 0 to 100: ");
        scanf("%d", &i);
        if(i < r)
        {
            printf("\nChecked Number is less than guessed\n");
            c++;
        }
        else if(i > r)
        {
            printf("\nChecked number is greater than guessed\n");
            c++;
        }
        else if(i < 65);

        else
            printf("\nWoowwwww you won : it took you %d tries\n", c);
    }
}
