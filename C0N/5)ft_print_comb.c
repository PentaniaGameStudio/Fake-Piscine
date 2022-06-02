void ft_print_comb2(void)
{
	int first = 0;
	int second = 0;
	int third = 0;
	
	while (first < 10)
	{
		second = first +1;
		while(second < 10)
		{
			third = second +1;
			while (third < 10)
			{
				write_number(first, second, third);
				third++;
			}
			third = 0;
			second++;
		}
		second = 0;
		first++;
	}
}

void write_number(int firstNumber, int secondNumber)
{
	char numberToWrite[] = "123, ";
	numberToWrite[0] = firstNumber + '0';
	numberToWrite[1] = secondNumber + '0';
	numberToWrite[2] = thirdNumber + '0';
	write (1, numberToWrite , 5);
}