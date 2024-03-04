/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilangov <kilangov@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:06:11 by kilangov          #+#    #+#             */
/*   Updated: 2024/03/03 18:40:23 by kilangov         ###   ########.fr       */
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

	if (x < 1 || y < 1)
	{
		write(1, "Error. Number must be greater than ZERO\n", 40);
		return ;
	}
		i = 0;
		while (i < y)
		{
			if (i == 0)
			{
				print_line(x, 'A', 'B', 'C');
			}
			else if (i == y -1)
			{
				print_line(x, 'C', 'B', 'A');
			}
			else
			{
				print_line(x, 'B', ' ', 'B');
			}
			ft_putchar('\n');
			i++;
		}
}

