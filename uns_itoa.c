/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:15:54 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:15:54 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	count_uns_digits(unsigned long n);

char	*uns_itoa(unsigned int n)
{
	int		num_digits;
	char	*res;

	num_digits = count_uns_digits(n);
	res = malloc((num_digits + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[num_digits] = '\0';
	while (num_digits > 0)
	{
		res[num_digits - 1] = (n % 10) + '0';
		num_digits--;
		n = n / 10;
	}
	return (res);
}

unsigned int	count_uns_digits(unsigned long n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
