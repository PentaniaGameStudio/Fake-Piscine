int     ft_str_is_alpha(char *str)
{
    int result = 1;
    for(int i = 0; i < strlen(str); i++)
    {
        if((str[i] < 65 + '0' || str[i] > 90 + '0') && ((str[i] < 97 + '0' || str[i] < 122 + '0'))
        {
            result = 0;
        }
    }
}

int     ft_str_is_alpha2(char *str)
{
    int result = 1;
    for(int i = 0; i < strlen(str); i++)
    {
        if((str[i] < 65 + '0' || str[i] > 90 + '0')
        {
            if (str[i] < 97 + '0' || str[i] < 122 + '0') result = 0;
        }
    }
}