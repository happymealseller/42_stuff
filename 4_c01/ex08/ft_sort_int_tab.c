void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;

	while (i < size - 1)
	{
		if (tab[i] > tab[i+1]) {
			temp = tab[i];
			tab[i]= tab[i+1];
			tab[i+1] = temp;
		}

		i++;
	}
}

// example [ 7 1 6 5 8 2 9 ]
// example [ 1 7 6 5 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
// example [ 7 6 1 5 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
// example [ 7 1 5 6 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
// example [ 7 1 6 5 8 2 9 ]
