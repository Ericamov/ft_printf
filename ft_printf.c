/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:43:01 by eanella           #+#    #+#             */
/*   Updated: 2025/01/21 19:41:29 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			count++;
		}
		else
		{
			str++;
			print_type(*str, args, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}
