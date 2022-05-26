#include <stdio.h>

void ft_fun_begin_here(int totalNumber, int start)
{
	char text[11];
	int	index = 1;
	*text = '0';
	text[0] = start + '0';
	
	while (index < totalNumber)
	{
		text[index] = text[index - 1] + 1;
		index++;
	}
	text[totalNumber] = ',';
	text[totalNumber + 1] = ' ';
	
	write(1, text, totalNumber+2);
	
	int lastNumber = index;
	int actualIndex = index;
	
	while(actualIndex-1 > 0)
	{
	    while (lastNumber < 10)
	    {
	        text[actualIndex-1] = lastNumber + '0';
    	    write(1, text, totalNumber+2);
    	    lastNumber++;
	    }
	    lastNumber = text[actualIndex-2] + 2;
	    text[actualIndex-2] = text[actualIndex-2] + 1;
	}
}




void ft_print_combn(int n) 
{
    if (n > 1 && n < 10)  ft_fun_begin_here(n,0);
    else if (n < 1) printf("Error, number too much small");
    else if (n > 9) printf("Error, number too much big");
}

int main()
{
    ft_print_combn(3);
  return 0;
}