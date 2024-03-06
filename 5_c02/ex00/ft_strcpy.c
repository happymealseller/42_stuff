char *ft_strcpy(char *dest, char *src)
{
	int i;

	i= 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	// all string ends with a '\0' so we set at the end	
	dest[i] = '\0';
	return dest;
	

}
