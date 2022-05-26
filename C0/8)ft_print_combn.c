#include <stdio.h>

void ft_fun_begin_here(int totalNumber)
{
	char text[10];
	int	index = 1;
	*text = '0';
	char virgule[2];
	virgule[0] = ',';
	virgule[1]=' ';
	while (index < totalNumber)
	{
		text[index] = '0' + index;
		index++;
	}
	
	write(1, text, totalNumber);
  
   while (text[0] != 58 - totalNumber)
   {
    text[index-1] += 1;
	if (text[index-1] >= '0'+10) 
	{
	    text[index-2] += 1;
	    text[index-1] = text[index - 2] + 1;
	    ft_verify_max(text, index);
	}
	write(1, virgule, 2);
	write(1, text, totalNumber);
   }
}

void ft_verify_max(char *text, int index)
{
    if (text[index] == '0'+10) text[index-1] = text[index-2]+1;
    if (index != 0) ft_verify_max(text, index-1);
    else text[0] += 1;
}

void ft_print_combn(int n) 
{
    if (n > 1 && n < 10)  ft_fun_begin_here(n);
    else if (n < 1) printf("Error, number too much small");
    else if (n > 9) printf("Error, number too much big");
}

int main()
{
    ft_print_combn(2);
  return 0;
}