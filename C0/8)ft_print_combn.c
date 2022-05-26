
void ft_fun_begin_here(int nbr)
{
	int index = 0;
	int timeRotating = 0;
	char numberToShow[nbr+2];
	
	while(timeRotating < nbr)
	{
    	while (index < nbr)
	    {
	    	if(index == 0) numberToShow[0] = timeRotating + '0';
	    	else numberToShow[index] = numberToShow[index-1] + 1;
	        if(timeRotating+1 < nbr)
	        {
	            numberToShow[index+1] = ',';
	            numberToShow[index+2] = ' ';
	        }
	        index++;
    	}
    	
	   if(timeRotating+1 < nbr) write(1, numberToShow, nbr+2);
	   else write(1, numberToShow, nbr);
	   
	    timeRotating ++;
	    index = 0;
    }
}
void ft_print_combn(int n) 
{
    if (n > 1 && n < 10) ft_fun_begin_here(n);
    else if (n < 1) printf("Error, number too much small");
    else if (n > 9) printf("Error, number too much big");
}