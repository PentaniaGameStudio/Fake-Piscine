// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int sort[size];
    int index;
    while(index < size)
    {
        int smaller = 2147483647;
        for(int i = 0; i < size; i++) if(tab[i] < smaller && tab[i] != 2147483647) 
        {
            smaller = tab[i];
            tab[i] = 2147483647;
        }
        sort[index] = smaller;
        index++;
    }
}