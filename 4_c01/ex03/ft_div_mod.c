/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jun-tan <jun-tan@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:32:30 by jun-tan           #+#    #+#             */
/*   Updated: 2024/03/04 17:37:51 by jun-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int result;
	int remainder;

	result = a / b;
	remainder = a % b;
	*div = result;
	*mod = remainder;
}
