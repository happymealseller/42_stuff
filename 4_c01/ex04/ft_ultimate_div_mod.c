/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jun-tan <jun-tan@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:39:19 by jun-tan           #+#    #+#             */
/*   Updated: 2024/03/07 19:39:47 by jun-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_a;
	int	num_b;
	int	result;
	int	remain;

	num_a = *a;
	num_b = *b;
	result = num_a / num_b;
	remain = num_a % num_b;
	*a = result;
	*b = remain;
}
