/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:14:02 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:14:02 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_type(const char c, va_list args, int *count)
{
	if (c == 'c')
		print_char(va_arg(args, int), count);
	if (c == 's')
		print_str(va_arg(args, char *), count);
	if (c == 'p')
		print_ptr(va_arg(args, unsigned long), count);
	if (c == 'd' || c == 'i')
		print_num(va_arg(args, int), count);
	if (c == 'u')
		print_uns_num(va_arg(args, unsigned int), count);
	if (c == 'x' || c == 'X')
		print_hex(va_arg(args, unsigned int), c, count);
	if (c == '%')
		print_char('%', count);
}
