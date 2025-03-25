/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:15:23 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:15:23 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned int n, const char c, int *count)
{
	char	*str_num;
	char	*orig_ptr;

	str_num = hex_itoa(n);
	orig_ptr = str_num;
	if (c == 'X')
	{
		while (*str_num)
		{
			*str_num = ft_toupper(*str_num);
			str_num++;
		}
	}
	ft_putstr_fd(orig_ptr, 1);
	(*count) += ft_strlen(orig_ptr);
	free(orig_ptr);
}
