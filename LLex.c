#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

typedef struct s_list
{
    char    *country;
    size_t  population;
    struct  s_list *next;
}           t_list;

void    print_list(t_list *n)
{
    while(n != NULL)
    {
        printf("\nCountry name       : %s\nCountry population : %lu\n\n", n->country, n->population);
        printf("%p\n", &n->country);
        printf("%p\n", &n->population);
        n = n->next;
    }
}

int     main(void)
{
    //in single LL the adresses are not sequence, That allow us add, delete elements
    t_list *item1;
    t_list *item2;
    t_list *item3;
    t_list *item4;

    item1 = (t_list*)malloc(sizeof(t_list));
    item2 = (t_list*)malloc(sizeof(t_list));
    item3 = (t_list*)malloc(sizeof(t_list));
    item4 = (t_list*)malloc(sizeof(t_list));
    //-> address transfer
    item1->country = "Armenia";
    item1->population = 3100000;
    item1->next = item2;
    //*(item2) address transfer
    //"->" and "." dont't have a difference if write (*p).dot
    (*item2).country = "Georgia";
    (*item2).population = 3970000;
    (*item2).next = item3;

    item3->country = "Grecce";
    item3->population = 9870000;
    item3->next = item4;

    item4->country = "Iran";
    item4->population = 78560000;
    item4->next = NULL;

    print_list(item1);
    //in fixed array we can't add element without using new array, which will be copied there...
}
