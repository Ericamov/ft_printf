/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:23:08 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:23:08 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_ptr(unsigned long ptr, int *count)
{
	char	*str_ptr;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		(*count) += 5;
		return ;
	}
	str_ptr = hex_itoa((long)ptr);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(str_ptr, 1);
	(*count) += ft_strlen(str_ptr) + 2;
	free(str_ptr);
}
