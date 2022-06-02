#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int ft_strlen(char *str)
{
    int len = 0;
    for (len = 0; str[len] != '\0'; len++) {}
    return len;
}