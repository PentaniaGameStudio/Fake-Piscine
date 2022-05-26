void ft_print_numbers(void)
{
	char number[] = "";
   	for(int i = 10; i > -1;i--)
	{
		number[i] = i + '0';
	}
	write(1,number,10);
}