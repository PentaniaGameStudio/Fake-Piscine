char	strncpy(char *dest, char *src, unsigned int n)
{
	dest = src;
	if (dest[n] != '\0')dest[n+1] = '\0';
	return dest;
}