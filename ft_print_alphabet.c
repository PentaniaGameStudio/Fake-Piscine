void fr_print_alphabet(void)
{	
	char letter[] = "";
   	for(int i = 0; i < 27;i++)
	{
		letter[i] = i + '0' + 48;
	}
	write(1,letter,27);
}