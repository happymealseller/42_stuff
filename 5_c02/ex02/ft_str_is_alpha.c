int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;


	while (str[i] != '\0') {
		// no boolean in c so we use int for 0 false , 1 true
		int condition1;
		int condition2;

		condition1 = (str[i] >= 'a' && str[i] <= 'z');
		condition2 = (str[i] >= 'A' && str[i] <= 'Z');


		if (condition1 || condition2) {
		i++;
		} else {
			return 0;
		}
	}
	return 1;
}

