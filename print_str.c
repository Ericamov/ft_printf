/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:14:39 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:14:39 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(char *str, int *count)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		(*count) += 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		(*count) += ft_strlen(str);
	}
}
