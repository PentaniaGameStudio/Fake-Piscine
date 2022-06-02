void fr_print_reverse_alphabet(void)
{
	char letter[] = "";
	int index = 0;
   	for(int i = 27; i > -1;i--)
	{
		letter[index] = i + '0' + 48;
		index++;
	}
	write(1,letter,27);
}