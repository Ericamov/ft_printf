/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:16:23 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:16:23 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	count_hex_digits(unsigned long n);

char	*hex_itoa(unsigned long n)
{
	unsigned int	num_digits;
	char			*res;
	char			*hex_chars;

	hex_chars = "0123456789abcdef";
	if (n == 0)
		return (ft_strdup("0"));
	num_digits = count_hex_digits(n);
	res = malloc((num_digits + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[num_digits] = '\0';
	while (num_digits > 0)
	{
		res[num_digits - 1] = hex_chars[n % 16];
		num_digits--;
		n = n / 16;
	}
	return (res);
}

unsigned int	count_hex_digits(unsigned long n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n = n / 16;
	}
	return (count);
}
