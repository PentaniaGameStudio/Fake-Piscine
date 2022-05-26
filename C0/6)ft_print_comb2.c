void ft_print_comb2(void)
{
	int first = 0;
	int second = 0;
	int third = 0;
	int fourth = 0;
	
	while (first < 10)
	{
		while(second < 10)
		{
		fourth = second +1;
			while(third < 10)
			{
				while(fourth < 10)
				{
					write_number(first, second, third, fourth);
					fourth++;				
				}
				fourth = 0;
				third++;
			}
			third = 0;
			second++;
		}
		second = 0;
		first++;
	}
}

void write_number(int firstNumber, int secondNumber, int thirdNumber, int fourthNumber)
{
	char numberToWrite[] = "00 00, ";
	numberToWrite[0] = firstNumber + '0';
	numberToWrite[1] = secondNumber + '0';
	numberToWrite[3] = thirdNumber + '0';
	numberToWrite[4] = fourthNumber + '0';
	write (1, numberToWrite , 7);
}