/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jun-tan <jun-tan@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:46:13 by jun-tan           #+#    #+#             */
/*   Updated: 2024/03/04 19:44:22 by jun-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{	
	int length;

	length = 0;
	
	while (string[length] != '/0')
	{
		length++;
	}
	write(1, str, length)	
}
