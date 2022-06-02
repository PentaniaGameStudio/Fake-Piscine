#include <stdio.h>
#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int reversal[size];
    int index = 0;
    while(index < size)
    {
        reversal[index] = tab[size-index];
        index++;
    }
}