void ft_rev_int_tab(int *tab, int size)
{
	
	int i;
	int j;
	int result[size];

	i = 0;
	j = 0;
	
	while (i < size)
	{
		result[i] = tab[size -1 -i];
		i++ ;
	}

	// why this dont work? *tab = result;
	
	while (j < size) {
		tab[j] = result[j];
		j++;
	}
}


