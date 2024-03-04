/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilangov <kilangov@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:06:11 by kilangov          #+#    #+#             */
/*   Updated: 2024/03/03 18:28:23 by jun-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int col, char a, char b, char c)
{
	int	j;

	j = 0;
	while (j < col)
	{
		if (j == 0)
		{
			ft_putchar(a);
		}
		else if (j == col -1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Error, number must be less than 0\n", 35);
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			print_line(x, 'A', 'B', 'C');
		}
		else if (i == y -1)
		{
			print_line(x, 'A', 'B', 'C');
		}
		else
		{
			print_line(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		i++;
	}
}
