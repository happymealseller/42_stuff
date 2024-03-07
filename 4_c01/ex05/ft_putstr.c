/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jun-tan <jun-tan@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:46:13 by jun-tan           #+#    #+#             */
/*   Updated: 2024/03/07 19:40:30 by jun-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}
