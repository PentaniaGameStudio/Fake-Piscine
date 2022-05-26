void ft_putnbr(int nb)
{
int index = 0;
int maxIndex = 0;
char numberToShow[] = "";
int numberToCalculate = nb;

	while (numberToCalculate > 0)
	{
        numberToCalculate /= 10;
        maxIndex ++;
	}
	
numberToCalculate = nb;
	while (numberToCalculate > 0)
	{
        numberToShow[maxIndex-index] = numberToCalculate %10 + '0';
        numberToCalculate /= 10;
        index ++;
	}
	
	
	write(1, numberToShow, index+1);
}